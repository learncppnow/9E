#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

template <typename elementType = int>
struct Double
{
   int count = 0;
   void operator()(const elementType element) 
   {
      ++count;
      cout << element * 2 << ' ';
   }
};

int main()
{
   vector<int> numsInVec;

   for(int count = 0; count < 10; ++count)
      numsInVec.push_back(count);

   cout << "Displaying the vector of integers: " << endl;

   Double<int> doubleElement;
   // Display the array of integers
   doubleElement = for_each(numsInVec.begin(),  // Start of range
            numsInVec.end(), // End of range
            Double<>()); // Unary function object

   cout << "\nFunctor called: " << doubleElement.count << " times\n";

   return 0;
}