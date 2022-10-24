cmake_minimum_required(VERSION 3.18)

# Build name
project(ExampleLibrary-build)

set(TARGET_NAME ExampleLibrary)
add_library(${TARGET_NAME})

target_sources(${TARGET_NAME} PRIVATE
    src/ExampleClass.cpp
)

set(PUBLIC_HEADERS
    include/ExampleClass.h
)

set_target_properties(${TARGET_NAME} PROPERTIES PUBLIC_HEADER "${PUBLIC_HEADERS}")
set_target_properties(${TARGET_NAME} PROPERTIES DEBUG_POSTFIX "d")

target_include_directories(${TARGET_NAME} PRIVATE
    ${CMAKE_PROJECT_DIR}/src
    ${CMAKE_PROJECT_DIR}/include
)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/${TARGET_NAME})

install(TARGETS ${TARGET_NAME})