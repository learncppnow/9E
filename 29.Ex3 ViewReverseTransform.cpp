// C++20 sample. Use appropriate compiler settings
// Demonstrates views and adaptors in std::ranges

#include<ranges>
#include<vector>
#include<iostream>
using namespace std;

// concept ranges::view limits parameter type to view
template<ranges::view T>
void DisplayView(T& view)
{
   for (auto element : view)
      cout << element << ' ';

   cout << endl;
}

int main()
{
   vector<int> nums{ 1, 5, 202, -99, 42, 50 };
   auto viewAllElements = nums | std::views::all;
   cout << "View of all elements in the collection: ";
   DisplayView(viewAllElements);

   auto viewSquare3Rev = nums | views::reverse | views::take(3)
      | views::transform([](auto num) {return num * num; });
   cout << "View square of numbers, ignoring first three: ";
   DisplayView(viewSquare3Rev);

   return 0;
}