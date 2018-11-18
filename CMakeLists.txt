#
# CMake options
#

# CMake version
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

message("Cmake sample configuration pipeline started!")

#
# Project description and (meta) information
#

# Meta information about the project
set(META_PROJECT_NAME "TexasHoldem")
set(META_PROJECT_DESCRIPTION "Texas Holdem Card Game Framework for c++")
set(META_VERSION_MAJOR "1")
set(META_VERSION_MINOR "0")
set(META_VERSION_PATCH "0")
set(META_VERSION "${META_VERSION_MAJOR}.${META_VERSION_MINOR}.${META_VERSION_PATCH}")
set(META_NAME_VERSION "${META_PROJECT_NAME} v${META_VERSION}")


#
#Project configuration options
#

# Project options
option(BUILD_SHARED_LIBS "Build shared instead of static libraries." ON)
option(OPTION_SELF_CONTAINED "Create a self-contained install with all dependecies." OFF)
option(OPTION_BUILD_TESTS "Build tests." ON)
option(OPTION_BUILD_DOCS "Build documentation." OFF)
option(OPTION_BUILD_EXAMPLES "Build examples." OFF)

cmake_policy(SET CMP0048 NEW)
#
# Declare project
#

project(${META_PROJECT_NAME} VERSION ${META_VERSION} LANGUAGES C CXX)

#
# Executables and Libraries
#
file(GLOB_RECURSE Sources  main.cpp source/*.cpp include/*h)

add_executable(TexasHoldemApp ${Sources})


