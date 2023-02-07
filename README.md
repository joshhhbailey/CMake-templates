# CMake Template
*Josh Bailey*<br />

## Contents
- [CMake Template](#cmake-template)
  - [Contents](#contents)
  - [Overview](#overview)
  - [Build Instructions](#build-instructions)
    - [Build Everything](#build-everything)
    - [ExampleProject / ExampleTests](#exampleproject--exampletests)
    - [ExampleLibrary](#examplelibrary)
  - [Package Instructions](#package-instructions)

## Overview
A collection of templates and anything CMake related, that I'll probably forget how to do at some point or another.

## Build Instructions

### <u>Build Everything</u>
\> mkdir build<br/>
\> cd ./build<br/>
\> cmake ..<br/>
\> cmake --build .<br/>

Run Tests:<br/>
\> ctest -C [Debug | Release]


### <u>ExampleProject / ExampleTests</u>
\> mkdir build<br/>
\> cd ./build<br/>
\> cmake ..<br/>
\> cmake --build . --config [Debug | Release]<br/>

### <u>ExampleLibrary</u>
\> mkdir build<br/>
\> cd ./build<br/>
\> cmake ..<br/>
\> cmake --build . --target install

## Package Instructions
See: https://github.com/JoshhhBailey/acc-man<br/>
\> cpack -C [Debug | Release]