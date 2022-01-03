#include <iostream>
using namespace std;
   
int main()
{
   cout << "Enter two integers:" << endl;
   int num1 = 0, num2 = 0;
   cin >> num1;
   cin >> num2;

   bool isEqual = (num1 == num2);
   cout << "equality test: " << isEqual << endl;

   bool isUnequal = (num1 != num2);
   cout << "inequality test: " << isUnequal << endl;

   bool isGT = (num1 > num2); // greater than
   cout << "" << num1 << " > " << num2 << " test: " << isGT << endl;

   bool isLT = (num1 < num2); // lesser than
   cout << "" << num1 << " < " << num2 << " test: " << isLT << endl;

   bool isGTE = (num1 >= num2); // greater than or equal to
   cout << "" << num1 << " >= " << num2 << " test: " << isGTE << endl;

   bool isLTE = (num1 <= num2); // lesser than or equal to
   cout << "" << num1 << " <= " << num2 << " test: " << isLTE << endl;

   return 0;
}