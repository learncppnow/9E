#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

auto IsEven = [](const int& num) { return((num % 2) == 0); };

template <typename T>
void DisplayContents(const T& container)
{
   for_each(container.begin(), container.end(),
      [](const auto& element) {cout << element << ' '; });

   cout << "| Number of elements: " << container.size() << endl;
}

int main()
{
   vector<int> numsInVec{ 2017, 0, -1, 42, 10101, 25 };

   cout << "The initial contents: " << endl;
   DisplayContents(numsInVec);

   vector<int> vecCopy(numsInVec);

   cout << "The effect of using partition():" << endl;
   partition(numsInVec.begin(), numsInVec.end(), IsEven);
   DisplayContents(numsInVec);

   cout << "The effect of using stable_partition():" << endl;
   stable_partition(vecCopy.begin(), vecCopy.end(), IsEven);
   DisplayContents(vecCopy);

   return 0;
}