#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

template <typename T>
void DisplayContents(const T& container)
{
   for_each(container.begin(), container.end(),
      [](const auto& element) {cout << element << ' '; });
}

int main()
{
   vector<string> names{"John", "jack", "sean", "Anna"};

   // insert a duplicate 
   names.push_back("jack");

   cout << "The initial contents of the vector are:\n";
   DisplayContents(names);

   cout << "\nThe sorted vector contains names in the order:\n";
   sort(names.begin(), names.end());
   DisplayContents(names);

   cout << "\nSearching for \"John\" using 'binary_search':\n";
   bool found = binary_search(names.begin(), names.end(), "John");

   if(found)
      cout << "Result: \"John\" was found in the vector!\n";
   else
      cout << "Element not found " << endl;

   // Erase adjacent duplicates
   auto newEnd = unique(names.begin(), names.end());
   names.erase(newEnd, names.end());

   cout << "The contents of the vector after using 'unique':\n";
   DisplayContents(names);

   return 0;
}