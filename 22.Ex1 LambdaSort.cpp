#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() 
{
   vector<int> vecNumbers{25, -5, 122, 2021, -10001};

   // template lambda that displays element on screen
   auto displayElement = []<typename T>(const T& element) 
                          { cout << element << ' ';};

   cout << "Elements in vector in initial order:\n";
   for_each(vecNumbers.cbegin(), vecNumbers.cend(), displayElement);

   sort(vecNumbers.begin(), vecNumbers.end());

   cout << "\nAfter sort using default predicate:\n";
   for_each(vecNumbers.cbegin(), vecNumbers.cend(), displayElement);

   sort(vecNumbers.begin(), vecNumbers.end(),
       [](auto& lhs, auto& rhs) {return(lhs > rhs); });

   cout << "\nAfter sort in descending order:\n";
   for_each(vecNumbers.cbegin(), vecNumbers.cend(), displayElement);

   return 0;
}