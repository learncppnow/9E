#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
void DisplayContents(const T& container)
{
   for_each(container.begin(), container.end(),
      [](const auto& element) {cout << element << ' '; });

   cout << endl;
}

int main()
{
   vector<int> numsInVec{232, 5, -98, -3, 5, 0, 987};

   cout << "The initial contents of vector:\n";
   DisplayContents(numsInVec);

   replace(numsInVec.begin(), numsInVec.end(), 5, 8);
   cout << "After replacing value 5 by 8\n";
   DisplayContents(numsInVec);

   replace_if(numsInVec.begin(), numsInVec.end(),
       [](int element) {return((element % 2) == 0); }, -1);
   cout << "After replacing even values by -1:\n";
   DisplayContents(numsInVec);

   return 0;
}