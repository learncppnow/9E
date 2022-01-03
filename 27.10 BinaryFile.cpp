#include<fstream>
#include<iomanip>
#include<string>
#include<iostream>
using namespace std;

struct Human
{
   char name[20] = "John";
   int age = 40;
   char DOB[20] = "1981 Sep 1";
};

int main()
{
   Human aPerson;

   ofstream fsOut ("MyBinary.bin", ios_base::out | ios_base::binary);
   if (fsOut.is_open())
   {
      cout << "Writing one Human to a binary file" << endl;
      fsOut.write(reinterpret_cast<char*>(&aPerson), sizeof(aPerson));
      fsOut.close();
   }

   ifstream fsIn ("MyBinary.bin", ios_base::in | ios_base::binary);
   if(fsIn.is_open())
   {
      Human readHuman;
      fsIn.read((char*)&readHuman, sizeof(readHuman));

      cout << "Reading information from binary file: " << endl;
      cout << "Name = " << readHuman.name << endl;
      cout << "Age = " << readHuman.age << endl;
      cout << "Date of Birth = " << readHuman.DOB << endl;
   }

   return 0;
}