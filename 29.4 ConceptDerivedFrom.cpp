// C++20 sample. Use appropriate compiler settings
// Demonstrates concept derived_from

#include<concepts>
#include<iostream>
using namespace std;

class Base {};
class PublicDerived : public Base {};
class PrivateDerived : private Base {};
class Unrelated {};

template<derived_from<Base> T>
void ProcessBaseTypesOnly(T& input)
{
   cout << "Processing an instance of Base" << endl;
}

int main()
{
   static_assert(derived_from<PublicDerived, Base> /* == true */);
   static_assert(derived_from<PrivateDerived, Base> == false);
   static_assert(derived_from<Unrelated, Base> == false);

   PublicDerived d1;
   PrivateDerived d2;
   Unrelated u;
   ProcessBaseTypesOnly(d1); // OK, d1 is also type Base
   // ProcessBaseTypesOnly(d2); // Error: d2 isn't a Base
   // ProcessBaseTypesOnly(u); // Error: u is unrelated to Base

   return 0;
}