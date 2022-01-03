#include <iostream>
#include <sstream> // new include for ostringstream
#include <string>
using namespace std;

class Date
{
private:
   int day, month, year;
   string dateInString;

public:
   Date(int inMonth, int inDay, int inYear)
      : month(inMonth), day(inDay), year(inYear) {};

   operator const char*()
   {
      ostringstream formattedDate; // assists string construction
      formattedDate << month << " / " << day << " / " << year;
     
      dateInString = formattedDate.str();
      return dateInString.c_str();
   }
};
   
int main ()
{
   Date holiday (12, 25, 2021);

   cout << "Holiday is on: " << holiday << endl;

   // string strHoliday (holiday); // OK!
   // strHoliday = Date(11, 11, 2021); // also OK!

   return 0;
}