#include<string_view>
#include<iostream>
using namespace std;

int main()
{
   string strOriginal("Use views instead of copies of strings");
   string_view fullView(strOriginal); // a full view

   cout << "The full view shows: " << fullView << endl;

   cout << "The first instance of 'v' is at position: "  
        << fullView.find_first_of('v') << endl;
   
   cout << "Is view starting with \"Use\": " << \
      (fullView.starts_with("Use") ? "true" : "false") << endl; // C++20

   cout << "Is view ending with \"strings\": " << \
      (fullView.ends_with("strings") ? "true" : "false") << endl; // C++20

   string_view partialView(strOriginal.c_str(), 9); // partial view
   cout << "Partial view shows: " << partialView << endl; 

   return 0;
}