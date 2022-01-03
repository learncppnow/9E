#include<type_traits>

template <typename T>
class OnlyInt
{
public:
   OnlyInt()
   {
      static_assert(std::is_integral<T>::value, "Only integers please!");
   }
};

int main()
{
   OnlyInt<int> test1; // OK!
   // OnlyInt<double> test2; // Error!

   return 0;
}