#include<fstream>
#include<sstream>
#include<iostream>
using namespace std;

int main()
{
   cout << "Enter an integer: ";
   int input = 0;
   cin >> input;

   stringstream converterStream;
   converterStream << input;
   string inputAsStr;
   converterStream >> inputAsStr;

   cout << "Integer Input = " << input << endl;
   cout << "String gained from integer = " << inputAsStr << endl;

   stringstream anotherStream;
   anotherStream << inputAsStr;
   int copy = 0;
   anotherStream >> copy;

   cout << "Integer gained from string, copy = " << copy << endl;

   return 0;
}