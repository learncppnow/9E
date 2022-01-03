#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   vector <bool> boolFlags{ true, true, false }; // hold 3 bool flags
   boolFlags [0] = true;
   boolFlags [1] = true;
   boolFlags [2] = false;

   boolFlags.push_back(true); // insert a fourth bool at the end

   cout << "The contents of the vector are: " << endl;
   for (size_t index = 0; index < boolFlags.size(); ++ index)
      cout << boolFlags [index] << ' ';

   cout << endl;
   boolFlags.flip();

   cout << "The contents of the vector are: " << endl;
   for_each(boolFlags.cbegin(), boolFlags.cend(),
      [](const auto& b) {cout << b << ' '; }); 

   cout << endl;

   return 0;
}