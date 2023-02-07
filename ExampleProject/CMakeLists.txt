# Minimum required version of CMake
cmake_minimum_required(VERSION 3.18)

# Solution (.sln)
project(ExampleProject-build)

# Define variable
set(TARGET_NAME ExampleProject)

# Create executable (.exe)
add_executable(${TARGET_NAME})

# Declare source files (.cpp)
target_sources(${TARGET_NAME} PRIVATE
    main.cpp
)

# Declare location of referenced header files (.h)
target_include_directories(${TARGET_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/../ExampleLibrary/include)

# Declare location of referenced libraries (.lib)
target_link_directories(${TARGET_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/../build/ExampleLibrary/Debug)

# Declare libraries (.lib)
target_link_libraries(${TARGET_NAME} PRIVATE ExampleLibraryd.lib)
