#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
   vector <string> namesInVec{ "jim", "Jack", "Sam", "Anna" };

   // template lambda that displays object on screen
   auto displayElement = []<typename T>(const T& element) 
                          { cout << element << ' ';};

   cout << "The names in vector in order of insertion: " << endl;
   for_each(namesInVec.cbegin(), namesInVec.cend(), displayElement);

   cout << "\nOrder after case sensitive sort: \n";
   sort(namesInVec.begin(), namesInVec.end());
   for_each(namesInVec.cbegin(), namesInVec.cend(), displayElement);

   cout << "\nOrder after sort ignoring case: \n";
   sort(namesInVec.begin(), namesInVec.end(),
       [](const string& str1, const string& str2) -> bool  // lambda
       {
          string str1LC, str2LC; // LC = lowercase
          str1LC.resize(str1.size()); // create space to store result
          str2LC.resize(str2.size());

          // Convert strings (each character) to the lower case
          transform(str1.begin(), str1.end(), str1LC.begin(),::tolower);
          transform(str2.begin(), str2.end(), str2LC.begin(), ::tolower);

          return(str1LC < str2LC); 
       }  // end of lambda
     );  // end of sort

   for_each(namesInVec.cbegin(), namesInVec.cend(), displayElement);

   return 0;
}