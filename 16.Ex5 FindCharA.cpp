#include <iostream>
#include <string>

int main()
{
   using namespace std;

   string sampleStr("Good day String! Today is beautiful!");
   cout << "Sample string is: " << sampleStr << endl;
   cout << "Locating all instances of character 'a'" << endl;

   auto charPos = sampleStr.find('a', 0);

   while (charPos != string::npos)
   {
      cout << "'" << 'a' << "' found";
      cout << " at position: " << charPos << endl;

      // resume find starting with next character
      size_t charSearchPos = charPos + 1;

      charPos = sampleStr.find('a', charSearchPos);
   }

   return 0;
}