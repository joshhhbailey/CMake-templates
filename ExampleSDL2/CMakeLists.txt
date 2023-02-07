# Minimum required version of CMake
cmake_minimum_required(VERSION 3.18)

# Solution (.sln)
project(ExampleSDL2-build)

# Define variable
set(TARGET_NAME ExampleSDL2)

# Create executable (.exe)
add_executable(${TARGET_NAME})

# Declare source files (.cpp/.h)
target_sources(${TARGET_NAME} PRIVATE
	# .cpp
	src/main.cpp
	src/SDLScene.cpp
	src/KeyboardManager.cpp
	# .h
	include/SDLScene.h
	include/KeyboardManager.h
)

# Mac/Linux specific setup (NOT TESTED SINCE 31/12/21)
if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin" OR ${CMAKE_SYSTEM_NAME} MATCHES "Linux")
	
	# Define variable
	set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/modules")
	
	# Load SDL2 package, via vcpkg
	find_package(SDL2 REQUIRED COMPONENTS main)
	
	# Load SDL2-image package, via vcpkg
	find_package(SDL2_image)
	
	# Declare location of referenced header files (.h)
	target_include_directories(${TARGET_NAME} PRIVATE
		${SDL2_INCLUDE_DIRS}
		${SDL2main_INCLUDE_DIRS}
		${CMAKE_BINARY_DIR}
		${SDL2_IMAGE_INCLUDE_DIRS}
	)
	
	# Declare libraries
	target_link_libraries(${TARGET_NAME} PRIVATE ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARY})

# Windows specific setup
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Windows")

	# Load SDL2 package, via vcpkg
	find_package(SDL2 CONFIG REQUIRED)

	# Load SDL2-image package, via vcpkg
	find_package(sdl2-image CONFIG REQUIRED)
	
	# Declare libraries (.lib)
	target_link_libraries(${TARGET_NAME} PRIVATE SDL2::SDL2 SDL2::SDL2main SDL2::SDL2_image)
	
endif()

# Declare location of referenced header files (.h)
target_include_directories(${TARGET_NAME} PRIVATE
	include
)
