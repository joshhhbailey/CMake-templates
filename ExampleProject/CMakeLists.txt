cmake_minimum_required(VERSION 3.18)

project(ExampleProject-build)
set(TargetName ExampleProject)

add_executable(${TargetName})

target_sources(${TargetName} PRIVATE
    ${PROJECT_SOURCE_DIR}/main.cpp
)

target_include_directories(${TargetName} PRIVATE ${PROJECT_SOURCE_DIR}/../ExampleLibrary/ExampleLibrary/include)

target_link_directories(${TargetName} PRIVATE ${PROJECT_SOURCE_DIR}/../ExampleLibrary/ExampleLibrary/lib)

target_link_libraries(${TargetName} PRIVATE ExampleLibraryd.lib)