// C++20 sample. Use appropriate compiler settings
// Demonstrates views and adaptors in std::ranges

#include<ranges>
#include<vector>
#include<iostream>
using namespace std;

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

   // Adaptor all to create a view comprising all elements
   auto viewAllElements = nums | std::views::all;
   cout << "View of all elements in the collection: ";
   DisplayView(viewAllElements);

   // Adaptor filter to create a view comprising even numbers
   auto viewOnlyEven = nums | \
      std::views::filter([](auto num) {return ((num % 2) == 0); });
   cout << "View of even numbers in collection: ";
   DisplayView(viewOnlyEven);

   // Adaptor reverse to create a view of elements in reverse order
   auto viewReverse = nums | std::views::reverse;
   cout << "View of collection in reverse: ";
   DisplayView(viewReverse);

   // Adaptor drop to create a view of elements without first 3
   auto viewSkip3 = nums | std::views::drop(3);
   cout << "View of collection ignoring first 3 elements: ";
   DisplayView(viewSkip3);

   // Adaptor take to create a view comprising first 3 elements 
   auto viewFirst3 = nums | std::views::take(3);
   cout << "View of first 3 elements: ";
   DisplayView(viewFirst3);

   // Adaptor transform to create a view comprising -1, 0 or 1
   auto viewTransform = nums | \
      std::views::transform([](auto num) {return (num % 2); });
   cout << "Transformed view ";
   DisplayView(viewTransform);

   return 0;
}