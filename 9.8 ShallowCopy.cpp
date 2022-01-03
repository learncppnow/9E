// This sample involves shallow copying and will crash to demonstrate the problem
#include <iostream>
using namespace std;

class MyBuffer
{
private:
   int* myNums;

public:
   MyBuffer(unsigned int length)
   {
      cout << "Constructor allocates " << length << " integers" << endl;
      myNums = new int[length]; // allocate memory
   }

   ~MyBuffer()
   {
      cout << "Destructor releasing allocated memory" << endl;
      delete[] myNums; // free allocated memory
   }

   // other set and get functions to work with myNums
};

void UseMyBuf(MyBuffer copyBuf)
{
   cout << "Copy of buf will be destroyed when function ends" << endl;
}

int main()
{
   cout << "How many integers would you like to store? ";
   unsigned int numsToStore = 0;
   cin >> numsToStore;

   MyBuffer buf(numsToStore);
   UseMyBuf(buf); // send a copy

   return 0; // crash, at destruction of buf
}