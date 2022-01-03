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

   auto lambdaIsEven = [](auto num) {return ((num % 2) == 0); };
   auto viewEvenInRev = nums | views::reverse | views::filter(lambdaIsEven);
   cout << "View even numbers in reverse: ";
   DisplayView(viewEvenInRev);

   auto viewEvenInReverseTopTwo = nums | views::reverse 
              | views::filter(lambdaIsEven) | views::take(2);
   cout << "View first two even numbers in reverse: ";
   DisplayView(viewEvenInReverseTopTwo);

   return 0;
}
