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
      cout << "Constructing new instance with " \
           << length << " elements" << endl;
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

   MyBuffer(MyBuffer&& src) // move constructor
   {
      cout << "Move constructor transferring ownership" << endl;

      if (src.myNums != NULL)
      {
         bufLength = src.bufLength;
         myNums = src.myNums; // take ownership

         src.myNums = NULL;
         src.bufLength = 0;
      }
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

   MyBuffer& operator= (MyBuffer&& src) // move assignment
   {
      cout << "Move assignment transferring ownership" << endl;

      if ((src.myNums != NULL) && (myNums != src.myNums))
      {
         delete[] myNums;
         myNums = src.myNums; // take ownership
         bufLength = src.bufLength;

         src.bufLength = 0;
         src.myNums = NULL;
      }

      return *this;
   }

   MyBuffer operator + (const MyBuffer& bufToAppend)
   {
      cout << "Operator + concatenating" << endl;
      MyBuffer newBuf(this->bufLength + bufToAppend.bufLength);

      for (unsigned int counter = 0; counter < bufLength; ++counter)
         newBuf.SetValue(counter, *(myNums + counter));

      for (unsigned int counter = 0; counter < bufToAppend.bufLength; ++counter)
         newBuf.SetValue(counter + bufLength, *(bufToAppend.myNums + counter));

      return newBuf;
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
   MyBuffer buf1(5);
   MyBuffer buf2(15);

   cout << "Concatenation at object instantiation: " << endl;
   MyBuffer buf3(buf1 + buf2); 
   MyBuffer bufSum(1);

   cout << "Concatenation at assignment: " << endl;
   bufSum = buf1 + buf2 + buf3;  

   return 0;
}