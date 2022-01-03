#include <algorithm>
#include <list>
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
   list<string> names{ "John", "Brad", "jack", "sean", "Anna" };

   cout << "Sorted contents of the list are: " << endl;
   names.sort();
   DisplayContents(names);

   cout << "\nLowest index where \"Brad\" can be inserted is: ";
   auto minPos = lower_bound(names.begin(), names.end(), "Brad");
   cout << distance(names.begin(), minPos) << endl;

   cout << "The highest index where \"Brad\" can be inserted is: ";
   auto maxPos = upper_bound(names.begin(), names.end(), "Brad");
   cout << distance(names.begin(), maxPos) << endl;

   cout << "List after inserting Brad in sorted order: " << endl;
   names.insert(minPos, "Brad");
   DisplayContents(names);

   return 0;
}