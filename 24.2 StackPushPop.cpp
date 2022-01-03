#include <stack>
#include <iostream>
   
int main()
{
   using namespace std;
   stack<int> numsInStack;

   // push: insert values at top of the stack
   cout << "Pushing {25, 10, -1, 5} on stack in that order:\n";
   numsInStack.push(25);
   numsInStack.push(10);
   numsInStack.push(-1);
   numsInStack.push(5);

   cout << "Stack contains " << numsInStack.size() << " elements\n";
   while(numsInStack.size() != 0)
   {
      cout << "Popping topmost element: " << numsInStack.top() << endl;
      numsInStack.pop(); // pop: removes topmost element
   }

   if(numsInStack.empty())  // true: due to previous pop()s
      cout << "Popping all elements empties stack!\n";

   return 0;
}