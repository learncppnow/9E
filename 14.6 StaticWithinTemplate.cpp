#include <iostream>
using namespace std;

template <typename T>
class TestStatic
{
public:
   static T staticVal;
};
   
// static member initialization
template<typename T> T TestStatic<T>::staticVal;

int main()
{
   TestStatic<int> intInstance;
   cout << "Setting staticVal for intInstance to 2021" << endl;
   intInstance.staticVal = 2021;

   TestStatic<double> dblnstance;
   cout << "Setting staticVal for dblnstance to 1011.022" << endl;
   dblnstance.staticVal = 1011.022;

   cout << "intInstance.staticVal = " << intInstance.staticVal << endl;
   cout << "dblnstance.staticVal = " << dblnstance.staticVal << endl;

   return 0;
}