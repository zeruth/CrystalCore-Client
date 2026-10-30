cmake_minimum_required(VERSION 3.24)
project(CrystalCore C CXX)

# An x64 port of FFXIV's ARR beta client: the reference's functions translated to C (src/gen,
# written by Rhipper's translate32.py) and Rhipper's 32-bit runtime (runtime32/) that maps the
# reference's image and runs it. See runtime32/Ghidra32.h for the memory model.
if(NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
  message(FATAL_ERROR "CrystalCore builds as x64 (-A x64)")
endif()

# Rhipper, where rhipper.json says it is
file(READ ${CMAKE_SOURCE_DIR}/rhipper.json RHIPPER_JSON)
string(JSON RHIPPER_DIR GET ${RHIPPER_JSON} rhipper)
set(RUNTIME32 ${RHIPPER_DIR}/runtime32)
if(NOT EXISTS ${RUNTIME32}/RefImage.cpp)
  message(FATAL_ERROR "no Rhipper runtime at ${RUNTIME32} (rhipper.json \"rhipper\")")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# ---- the translation ----------------------------------------------------------------------------
file(GLOB GEN_SOURCES CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/src/gen/*.c)
add_library(gen OBJECT ${GEN_SOURCES})
target_include_directories(gen PRIVATE ${CMAKE_SOURCE_DIR}/src/gen)
# Pointer-width conversions are the memory model, not mistakes: an int holding a 32-bit address
# widened to a pointer (C4312), a pointer narrowed into a 4-byte slot (C4311, C4244), int and
# pointer assignments Ghidra wrote without a cast (C4047, C4133, C4022, C4024), and what the
# decompiler leaves (uninitialized locals C4700, missing returns C4715/4716). A function called
# without a declaration (C4013) is an error: every translated function and helper is declared, and
# an undeclared one would only fail at the link

# The translation always builds optimized (/O2): a Debug configuration's /RTC1 does not combine
# with it, and its /Od is overridden anyway. Only C is translated, so the runtime's C++ keeps both
foreach(flags CMAKE_C_FLAGS_DEBUG CMAKE_C_FLAGS_RELWITHDEBINFO)
  string(REGEX REPLACE "[/-](RTC[1csu]+|Od)( |$)" "" ${flags} "${${flags}}")
endforeach()

# (GEN_OPT: the translation's optimization, /O2; another for an experiment, `-DGEN_OPT=/Od` in a
# build directory of its own: unoptimized, every load and store where the C has it)
set(GEN_OPT "/O2" CACHE STRING "the translated code's optimization")
target_compile_options(gen PRIVATE /W1 /bigobj ${GEN_OPT} /GS- /TC /Zi
  /we4013 /wd4022 /wd4024 /wd4028 /wd4047 /wd4090 /wd4133 /wd4146 /wd4244 /wd4305 /wd4311 /wd4312
  /wd4554 /wd4700 /wd4715 /wd4716)

# ---- the runtime and the executable --------------------------------------------------------------
include(${RUNTIME32}/Runtime32.cmake)
add_executable(CrystalCore $<TARGET_OBJECTS:gen>)
# the runtime (runtime32/Runtime32.cmake: its sources, the memory model's fixed base below 2 GB,
# subsystem 5.02 as the reference's 5.1, DxDiag32.exe beside the executable) and its names for this
# project: log prefix, environment variables (CRYSTALCORE_REF, CRYSTALCORE_HANGDUMP,
# CRYSTALCORE_TRACE, CRYSTALCORE_WATCH), the reference's file name
# (the main thread keeps the default 1 MB stack: Windows makes it before the launcher can reserve
# the reference's range, and an 8 MB one did not fit below 0x400000 and took the range itself.
# The reference runs on a thread of its own with a large stack, runtime32/RefImage.cpp)
rhipper_runtime32(CrystalCore NAME CrystalCore ENV CRYSTALCORE REF ffxiv.exe)
# a PDB in every configuration: the runtime's hang dump and crash reports name the translated
# functions (F_<address>) through it
target_link_options(CrystalCore PRIVATE /DEBUG:FULL /OPT:REF /OPT:ICF)
