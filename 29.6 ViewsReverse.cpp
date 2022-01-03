// C++20 sample. Use appropriate compiler settings
// Demonstrates views and adapter reverse supplied by std::ranges

#include<ranges>
#include<vector>
#include<iostream>
using namespace std;

int main()
{
   vector<int> nums{ 1, 5, 202, -99, 42, 50 };

   // create a view using adaptor reverse
   auto viewReverse = nums | std::views::reverse;

   cout << "View of collection in reverse: ";
   // range-based for: because, a view is also a range
   for (int num : viewReverse)
      cout << num << ' ';

   cout << endl << "Original collection (unchanged): ";
   for (int num : nums)
      cout << num << ' ';

   return 0;
}