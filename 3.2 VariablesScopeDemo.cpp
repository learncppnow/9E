#include <iostream>
using namespace std;

void MultiplyNumbers ()
{
   cout << "Enter the first number: ";
   int firstNumber = 0;
   cin >> firstNumber;

   cout << "Enter the second number: ";
   int secondNumber = 0;
   cin >> secondNumber;

   // Multiply numbers, store multiplicationResult in a variable
   int multiplicationResult = firstNumber * secondNumber;

   // Display multiplicationResult
   cout << firstNumber << " x " << secondNumber << " = ";
   cout << multiplicationResult << endl;
}
int main ()
{
   cout << "This program multiplies two numbers" << endl;

   // Call the function that does all the work
   MultiplyNumbers();

   // cout << firstNumber << " x " << secondNumber; 
   // cout << " = " << multiplicationResult << endl;

   return 0;
}