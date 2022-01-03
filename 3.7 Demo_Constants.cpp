#include <iostream>

int main()
{
   using namespace std;

   const double pi = 22.0 / 7;
   cout << "The value of constant pi is: " << pi << endl;

   // Uncomment next line to fail compilation
   // pi = 345; // error, assignment to a constant

   return 0;
}