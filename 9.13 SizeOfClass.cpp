#include <iostream>
using namespace std;
   
class MyBuffer
{
private:
   int* myNums;

public:
   MyBuffer(unsigned int length)
   {
      myNums = new int[length]; // allocate memory
   }

   ~MyBuffer()
   {
      delete[] myNums; // free allocated memory
   }

   // other set and get functions to work with myNums
};

class Human
{
private:
   int age;
   string gender;
   string name;

public:
   Human(const string& inputName, int inputAge, string inputGender)
      : name(inputName), age (inputAge), gender(inputGender) {}

   int GetAge ()
   { return age; }
};

int main()
{
   MyBuffer buf1(5); // buffer initialized to 5 integers
   MyBuffer buf2(20);// buffer initialized to 20 integers

   cout << "sizeof(MyBuffer) = " << sizeof(MyBuffer) << endl;
   cout << "sizeof(buf1) = " << sizeof(buf1) << endl;
   cout << "sizeof(buf2) = " << sizeof(buf2) << endl;

   Human firstMan("Adam", 25, "man");
   Human firstWoman("Eve", 25, "woman");

   cout << "sizeof(Human) = " << sizeof(Human) << endl;
   cout << "sizeof(firstMan) = " << sizeof(firstMan) << endl;
   cout << "sizeof(firstWoman) = " << sizeof(firstWoman) << endl;

   return 0;
}