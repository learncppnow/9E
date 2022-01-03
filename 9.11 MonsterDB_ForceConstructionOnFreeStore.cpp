#include <iostream>
using namespace std;

class MonsterDB 
{
private:
   ~MonsterDB() {}; // private destructor prevents instances on stack

public:
   static void DestroyInstance(MonsterDB* pInstance)
   {
      delete pInstance; // member can invoke private destructor
   }

   void DoSomething() {} // sample member method
};

int main()
{
   // MonsterDB myDB_Stack; // error - cannot instantiate on stack as designed
   MonsterDB* myDB = new MonsterDB(); // OK: on free store
   myDB->DoSomething();

   // uncomment next line to see compile failure 
   // delete myDB; // private destructor cannot be invoked

   // use static member to release memory
   MonsterDB::DestroyInstance(myDB);

   return 0;
}