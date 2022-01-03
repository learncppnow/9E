#include <iostream>
#include <compare>
using namespace std;

class Date
{
private:
   int day, month, year;

public:
   Date(int inMonth, int inDay, int inYear)
      : month(inMonth), day(inDay), year(inYear) {}

   auto operator <=>(const Date& rhs) const
   {
      if (year < rhs.year)
         return std::strong_ordering::less;
      else if (year > rhs.year)
         return std::strong_ordering::greater;
      else
      {
         // years are identical, compare months
         if (month < rhs.month)
            return std::strong_ordering::less;
         else if (month > rhs.month)
            return std::strong_ordering::greater;
         else
         {
            // months are identical, compare days
            if (day < rhs.day)
               return std::strong_ordering::less;
            else if (day > rhs.day)
               return std::strong_ordering::greater;
            else
               return std::strong_ordering::equal;
         }
      }
   }
};

int main()
{
   cout << "Enter a date: month, day & year" << endl;
   int month, day, year;
   cin >> month;
   cin >> day;
   cin >> year;
   Date date1(month, day, year);

   cout << "Enter another date: month, day & year" << endl;
   cin >> month;
   cin >> day;
   cin >> year;
   Date date2(month, day, year);

   auto result = date1 <=> date2;

   if (result < 0)
      cout << "Date 1 occurs before Date 2" << endl;
   else if (result > 0)
      cout << "Date 1 occurs after Date 2" << endl;
   else
      cout << "Dates are equal" << endl;

   return 0;
}