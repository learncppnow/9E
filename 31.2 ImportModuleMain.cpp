// Sample of C++20 Modules. Use the right compiler settings
// main() uses SimpleOperations, to be found in 
// 31.2 SimpleOperations.ixx: module interface unit
// 31.2 SimpleOperations.cpp: module implementation unit
// Add these to your MSVC project

import std.core;
import SimpleOperations;

int main()
{
   int sum = AddIntegers(500, 50);
   int difference = SubtractIntegers(500, 50);
   
   return 0;
}