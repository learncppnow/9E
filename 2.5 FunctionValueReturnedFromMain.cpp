#include <iostream>
using namespace std;

// Function declaration and definition
int DemoConsoleOutput()
{
   cout << "This is a simple string literal" << endl;
   cout << "Writing number five: " << 5 << endl;
   cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
   cout << "Pi  is 22 / 7 = " << 22.0 / 7 << endl;

   return 0;
}

int main()
{
   // Function call with return used to exit
   return DemoConsoleOutput();
}