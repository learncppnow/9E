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

   MyBuffer(const MyBuffer& src) // copy constructor
   {
      cout << "Copy constructor creating deep copy" << endl;
      bufLength = src.bufLength;
      myNums = new int[bufLength];
      copy(src.myNums, src.myNums + bufLength, myNums); // deep copy
   }

   MyBuffer& operator= (const MyBuffer& src) // copy assignment
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

   void DisplayBuf()
   {
      for (unsigned int counter = 0; counter < bufLength; ++counter)
         cout << *(myNums + counter) << " ";

      cout << endl;
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
      int valueEntered = 0;
      cin >> valueEntered;
      buf.SetValue(counter, valueEntered);
   }

   MyBuffer anotherBuf(1); // initialize to contain just 1 int
   anotherBuf = buf;
   anotherBuf.DisplayBuf();

   return 0; 
}
