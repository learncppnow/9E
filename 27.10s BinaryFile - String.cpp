#include<fstream>
#include<iomanip>
#include<string>
#include<iostream>
using namespace std;

int main()
{
   string name("Siddhartha Rao"), DOB ("May 1916");
   ofstream fsOut("MyBinary.bin", ios_base::out | ios_base::binary);

   if(fsOut.is_open())
   {
      cout << "Writing name and age to a binary file\n";
      size_t lenName = name.length();
      size_t lenDOB = DOB.length();

      // first store the length of the characters
      fsOut.write(reinterpret_cast<const char*>(&lenName), sizeof(size_t));
      fsOut.write(reinterpret_cast<const char*>(&lenDOB), sizeof(size_t));
      fsOut.write(name.c_str(), name.length());
      fsOut.write(DOB.c_str(), DOB.length());

      fsOut.close();
   }

   ifstream fsIn("MyBinary.bin", ios_base::in | ios_base::binary);

   if(fsIn.is_open())
   {
      // first read the lenghts of the stored strings
      size_t lenName = 0, lenDOB = 0;
      fsIn.read((char*)&lenName, sizeof(size_t));
      fsIn.read((char*)&lenDOB, sizeof(size_t));

      string readName, readDOB;
      readName.resize(lenName);
      readDOB.resize(lenDOB);
      fsIn.read(const_cast<char*>(readName.c_str()), lenName);
      fsIn.read(const_cast<char*>(readDOB.c_str()), lenDOB);
      cout << "Reading information from binary file: " << endl;
      cout << "Name = " << readName << endl;
      cout << "Date of Birth = " << readDOB << endl;
   }

   return 0;
}