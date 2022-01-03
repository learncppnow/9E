#include <iostream>
using namespace std;

void Square(const int& number, int& result)
{
   result = number*number;
}

int main()
{
   cout << "Enter a number you wish to square: ";
   int number = 0;
   cin >> number;

   int square = 0;
   Square(number, square);
   cout << "Square of " << number << " = " << square << endl;

   return 0;
}