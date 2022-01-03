#include <bitset>
#include <iostream>
using namespace std;

int main()
{
   // Initialize the bitset to 1001
   bitset<4> fourBits("1001");

   cout << "fourBits: " << fourBits << endl;

   // Initialize another bitset to 0010
   bitset<4> fourMoreBits("0010");

   cout << "fourMoreBits: " << fourMoreBits << endl;

   bitset<8> addResult(fourBits.to_ulong() + fourMoreBits.to_ulong());
   cout << "The result of the addition is: " << addResult;

   return 0;
}