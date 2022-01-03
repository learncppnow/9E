// C++20 sample. Use appropriate compiler settings
// Demonstrates concepts

#include<concepts>
using namespace std;

template <typename T>
concept AnyNumericType = floating_point<T> || integral<T>;

template<AnyNumericType T1, AnyNumericType T2>
class Person
{
public:
   T1 age;
   T2 yearsEmployed;

   Person(T1 num1, T2 num2) : age(num1), yearsEmployed(num2) {}
};

int main()
{
   Person<int, double> p1(21, 3.4); // OK
   Person<double, float> p2(32.6, 3.4f); // OK

   // Person<string, double> p3("lara", 3.4); // error: "lara" isn't numeric

   return 0;
}