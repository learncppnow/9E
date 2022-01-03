#include <iostream>
using namespace std;

void Square(int& number)
{
   number *= number;
}

int main()
{
   cout << "Enter a number you wish to square: ";
   int number = 0;
   cin >> number;

   Square(number);
   cout << "Square is: " << number << endl;

   return 0;
}