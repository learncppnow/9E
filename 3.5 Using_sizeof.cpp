#include <iostream>

int main()
{
   using namespace std;
   cout << "Computing the size of inbuilt variable types" << endl;

   cout << "sizeof bool: " << sizeof(bool) << endl;
   cout << "sizeof char: " << sizeof(char) << endl;
   cout << "sizeof unsigned short int: " << sizeof(unsigned short) << endl;
   cout << "sizeof short int: " << sizeof(short) << endl;
   cout << "sizeof unsigned long int: " << sizeof(unsigned long) << endl;
   cout << "sizeof long: " << sizeof(long) << endl;
   cout << "sizeof int: " << sizeof(int) << endl;
   cout << "sizeof uns. long long: "<< sizeof(unsigned long long)<< endl;
   cout << "sizeof long long: " << sizeof(long long) << endl;
   cout << "sizeof unsigned int: " << sizeof(unsigned int) << endl;
   cout << "sizeof float: " << sizeof(float) << endl;
   cout << "sizeof double: " << sizeof(double) << endl;
   
   cout << "The output changes with compiler, hardware and OS" << endl;

   return 0;
}