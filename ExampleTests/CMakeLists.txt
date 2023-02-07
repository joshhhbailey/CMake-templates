# Minimum required version of CMake
cmake_minimum_required(VERSION 3.18)

# Solution (.sln)
project(ExampleTests-build)

# Define variable
set(TARGET_NAME ExampleTests)

# Create executable (.exe)
add_executable(${TARGET_NAME})

# Declare source files (.cpp)
target_sources(${TARGET_NAME} PRIVATE
    main.cpp
)

# Load GTest package, via vcpkg
find_package(GTest CONFIG REQUIRED)

# Declare libraries (.lib)
target_link_libraries(${TARGET_NAME} PRIVATE
	GTest::gtest GTest::gtest_main
)

# Create a test for CTest, using our executable (.exe)
add_test(
	NAME ${TARGET_NAME}
	COMMAND ${TARGET_NAME}
)
