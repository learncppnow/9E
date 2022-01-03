#include<iostream>
#include<compare>
using namespace std;

int main()
{
   int num1, num2;
   cout << "Enter two integers" << endl;
   cin >> num1;
   cin >> num2;

   auto resultofComparison = (num1 <=> num2); // new in C++20!

   if (resultofComparison < 0)
      cout << "num1 is less than num2" << endl;
   else if (resultofComparison > 0)
      cout << "num1 is greater than num2" << endl;
   else // comparison evaluates to zero
      cout << "They're equal" << endl;

   return 0;
}