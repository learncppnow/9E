#include <iostream>
#include <algorithm>
using namespace std;

class MyBuffer
{
private:
   int* myNums;
   unsigned int bufLength;

public:
   MyBuffer(unsigned int length)
   {
      bufLength = length;
      myNums = new int[length]; // allocate memory
   }

   int& operator[] (unsigned int index)
   {
      return myNums[index];
   }

   // const version will be used by const instances of MyBuffer
   const int& operator[] (unsigned int index) const
   {
      return myNums[index];
   }

   MyBuffer(const MyBuffer& src) 
   {
      cout << "Copy constructor creating deep copy" << endl;
      bufLength = src.bufLength;
      myNums = new int[bufLength];
      copy(src.myNums, src.myNums + bufLength, myNums); // deep copy
   }

   MyBuffer& operator= (const MyBuffer& src) 
   {
      cout << "Copy Assignment creating deep copy" << endl;
      if (myNums != src.myNums) // avoid copy to self
      {
         if (myNums)
            delete myNums;

         bufLength = src.bufLength;
         myNums = new int[bufLength];
         copy(src.myNums, src.myNums + bufLength, myNums); // deep copy
      }

      return *this;
   }

   ~MyBuffer()
   {
      delete[] myNums; // free allocated memory
   }

   void SetValue(unsigned int index, int value)
   {
      if (index < bufLength) // check for bounds
         *(myNums + index) = value;
   }
};

int main()
{
   cout << "How many integers would you like to store? ";
   unsigned int numsToStore = 0;
   cin >> numsToStore;

   MyBuffer buf(numsToStore);
   for (unsigned int counter = 0; counter < numsToStore; ++counter)
   {
      cout << "Enter value: ";
      cin >> buf[counter];
   }

   for (unsigned int counter = 0; counter < numsToStore; ++counter)
      cout << "Value " << counter << " is " << buf[counter] << endl;

   // const MyBuffer bufConst(1); // requires const variant of operator[]
   return 0;
}