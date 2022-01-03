#include <iostream>
using namespace std;
   
class Date
{
private:
   int day, month, year;
   string dateInString;

public:
   Date(int inMonth, int inDay, int inYear)
      : month(inMonth), day(inDay), year(inYear) {};
   
   Date operator + (int daysToAdd) // binary addition
   {
      Date newDate (month, day + daysToAdd, year);
      return newDate;
   }

   Date operator - (int daysToSub) // binary subtraction
   {
      return Date(month, day - daysToSub, year);
   }

   void DisplayDate()
   {
      cout << month << " / " << day << " / " << year << endl;
   }
};

int main()
{
   Date holiday (12, 25, 2021);
   cout << "Holiday on: ";
   holiday.DisplayDate ();

   Date previousHoliday (holiday - 19);
   cout << "Previous holiday on: ";
   previousHoliday.DisplayDate();

   Date nextHoliday(holiday + 6);
   cout << "Next holiday on: ";
   nextHoliday.DisplayDate ();

   return 0;
}