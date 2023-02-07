# Minimum required version of CMake
cmake_minimum_required(VERSION 3.18)

# Solution (.sln)
project(ExampleLibrary-build)

# Define variable
set(TARGET_NAME ExampleLibrary)

# Create library (.lib/.dll)
add_library(${TARGET_NAME})

# Declare source files (.cpp)
target_sources(${TARGET_NAME} PRIVATE
    src/ExampleClass.cpp
)

# Declare header files (.h) to distribute during installation
set(PUBLIC_HEADERS
    include/ExampleClass.h
)

set_target_properties(${TARGET_NAME} PROPERTIES PUBLIC_HEADER "${PUBLIC_HEADERS}")
set_target_properties(${TARGET_NAME} PROPERTIES DEBUG_POSTFIX "d")

# Declare location of referenced header files (.h)
target_include_directories(${TARGET_NAME} PRIVATE
    ${CMAKE_PROJECT_DIR}/include
)

# Define installation path
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/${TARGET_NAME})

# Install library
install(TARGETS ${TARGET_NAME})
