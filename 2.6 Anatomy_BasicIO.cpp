#include <iostream>
#include <string>
using namespace std;

int main()
{
   // Declare a variable to store an integer
   int inputNumber;

   cout << "Enter an integer: ";

   // store integer given user input
   cin >> inputNumber;

   // The same with text i.e. string data
   cout << "Enter your name: ";
   string inputName;
   cin >> inputName;

   cout << inputName << " entered " << inputNumber << endl;

   return 0;
}