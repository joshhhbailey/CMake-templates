#include <iostream>

#include "../include/ExampleClass.h"

ExampleClass::ExampleClass() {}

ExampleClass::~ExampleClass() {}

void ExampleClass::PrintMessage(std::string _msg)
{
    std::cout << _msg << std::endl;
}