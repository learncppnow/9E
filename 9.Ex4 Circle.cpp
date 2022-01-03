#include <iostream>
using namespace std;

class Circle
{
   const double Pi;
   double Radius;

public:
   Circle(double InputRadius) : Radius(InputRadius), Pi(3.1416) {}

   double GetCircumference()
   {
      return 2*Pi*Radius;
   }

   double GetArea()
   {
      return Pi*Radius*Radius;
   }
};

int main()
{
   cout << "Enter a radius: ";
   double Radius = 0;
   cin >> Radius;

   Circle myCircle(Radius);

   cout << "Circumference = " << myCircle.GetCircumference() << endl;
   cout << "Area = " << myCircle.GetArea() << endl;

   return 0;
}