#include<concepts>
#include<iostream>
using namespace std;

template <std::floating_point T> // enforce floating point
double DivideNums(T dividend, T divisor)
{
	return (dividend / divisor);
}

int main()
{
   cout << "Pi = " << DivideNums(22.0, 7.0); // OK
   // cout << "Pi = " << DivideNums(22, 7); // err: not floating pt

 return 0;
}