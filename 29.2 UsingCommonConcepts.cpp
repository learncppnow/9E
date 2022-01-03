// C++20 sample. Use appropriate compiler settings
// Demonstrates concepts. Also uses a variadic func DisplayNums

#include<concepts>
#include<iostream>
using namespace std;

template <typename T>
concept AnyNumericType = floating_point<T> || integral<T>;

template <integral T>
double DivideOnlyInts(T dividend, T divisor)
{
   return (dividend / divisor);
}

template <typename T1, typename T2> 
requires AnyNumericType<T1> && AnyNumericType<T2>
double DivideAnyNumType(T1 dividend, T2 divisor)
{
   return (dividend / divisor);
}

template <typename T1, typename T2>
requires same_as<T1, T2>
double DivideIdenticalTypes(T1 dividend,T2 divisor)
{
   return (dividend / divisor);
}

void DisplayNums() { cout << endl; } 

template <typename T, typename... Types>
void DisplayNums(T num1, Types... numN)
{
   cout << num1 << ' ';
   DisplayNums(numN ...);
}

int main()
{
   double q1 = DivideOnlyInts(22, 7); // OK
   // double q2 = DivideOnlyInts(22.0, 7); // error: 22.0 isn't integral 

   double q3 = DivideAnyNumType(22.0, 7); // OK
   double q4 = DivideAnyNumType(22.0, 7.0); // OK
   double q5 = DivideAnyNumType(22.0, '7'); // OK: type char is numeric
   // double q6 = DivideAnyNumType("22.0", 7); // error: char* isn't numeric

   double q7 = DivideIdenticalTypes(22.0, 7.0); // OK
   double q8 = DivideIdenticalTypes(22.0, 7.0); // OK
   // double q9 = DivideIdenticalTypes(22.0, 7); // error: unidentical types

   DisplayNums("q1 =", q1, "q3 =", q3, "q4 =", q4);
   DisplayNums("q5 =", q5, "q7 =", q7, "q8 =", q8);

   return 0;
}