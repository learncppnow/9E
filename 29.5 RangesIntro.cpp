// C++20 sample. Use appropriate compiler settings
// Demonstrates concepts supplied by std::ranges
// Produces no output

#include<ranges>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<stack>
#include<forward_list>
using namespace std;

int main()
{
   static_assert(ranges::range<int[5]>); 
   static_assert(ranges::range<vector<int>>);
   static_assert(ranges::range<list<int>>);
   static_assert(ranges::range<set<int>>);
   static_assert(ranges::range<map<int, int>>);

   static_assert(ranges::forward_range<vector<int>>);
   static_assert(ranges::random_access_range<vector<int>>);
   static_assert(ranges::bidirectional_range<vector<int>>);

   // static_assert(ranges::range<stack<int>>); // error: stack isn't a range
   // static_assert(ranges::bidirectional_range<forward_list<int>>); // error: forward_list isn't bidirectional 
   // static_assert(ranges::random_access_range<set<int>>); // error: set doesnt support random access iteration

   return 0;
}