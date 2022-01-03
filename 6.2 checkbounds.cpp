#include <iostream>
#include <string>
using namespace std;

int main()
{
   cout << "Enter a line of text: " << endl;
   string userInput;
   getline (cin, userInput);

   char copyInput[20] = {};
   if (userInput.length() < 20) // check bounds
   {
      cout << "Input within bounds, creating copy" << endl;
      userInput.copy (copyInput, userInput.length());
      cout << "copyInput contains: " << copyInput << endl;
   }
   else
      cout << "Bounds exceeded: cannot copy!" << endl;

   return 0;
}