#include<iostream>
#include<string>
using namespace std;

int main()
{
   cout << "Enter a line: " << endl;
   char charBuf[10];
   cin.get(charBuf, 10);
   cout << "charBuf: " << charBuf << endl;

   return 0;
}