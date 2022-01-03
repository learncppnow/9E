#include <algorithm>
#include <vector>
#include <iostream>

// unary predicate for *_if functions
auto IsEven = [](const auto& number) {return((number % 2) == 0); }; 

int main()
{
   using namespace std;
   vector<int> numsInVec{ 2017, 0, -1, 42, 10101, 25 };

   size_t numZeroes = count(numsInVec.cbegin(), numsInVec.cend(), 0);
   cout << "Number of instances of '0': " << numZeroes << endl;

   size_t numEvenNums = count_if(numsInVec.cbegin(),
                          numsInVec.cend(), IsEven);

   cout << "Number of even elements: " << numEvenNums << endl;
   cout << "Number of odd elements: ";
   cout << numsInVec.size() - numEvenNums << endl;

   return 0;
}