# Minimum required version of CMake
cmake_minimum_required(VERSION 3.18)

# Setup vcpkg
if(NOT DEFINED CMAKE_TOOLCHAIN_FILE AND DEFINED ENV{CMAKE_TOOLCHAIN_FILE})
	# Set CMAKE_TOOLCHAIN_FILE from environment variable
	# ..\vcpkg\scripts\buildsystems\vcpkg.cmake
	set(CMAKE_TOOLCHAIN_FILE $ENV{CMAKE_TOOLCHAIN_FILE})
endif()

# Solution (.sln)
project(CMake-template-build)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Make the set C++ standard a requirement (don't fall back to older standards e.g 14, 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable testing for this directory and below
enable_testing()

add_subdirectory(ExampleLibrary)
add_subdirectory(ExampleProject)
add_subdirectory(ExampleTests)

