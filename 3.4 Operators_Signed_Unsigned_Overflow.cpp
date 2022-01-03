#include <iostream>
using namespace std;

int main()
{
   unsigned short uShortValue = 65535;
   cout << "unsigned short 65535 + 1 = ";
   cout << ++uShortValue << endl;

   short signedShort = 32767;
   cout << "signed short 32767 + 1 = ";
   cout << ++signedShort << endl;

   return 0;
}