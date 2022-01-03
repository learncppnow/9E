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

   cout << "\nEnter number to add to all elements: ";
   int num = 0;
   cin >> num;

   for_each(vecNumbers.begin(), vecNumbers.end(),
            [=](int& element) {element += num; });

   cout << "\nElements after adding the supplied number:\n";
   for_each(vecNumbers.cbegin(), vecNumbers.cend(), displayElement);

   return 0;
}