#include <iostream>
using namespace std;

int main()
{
   enum class DaysOfWeek
   {
      Sunday = 0,
      Monday,
      Tuesday,
      Wednesday,
      Thursday,
      Friday,
      Saturday
   };

   cout << "Find what days of the week are named after!" << endl;
   cout << "Enter a number for a day (Sunday = 0): ";

   int dayInput; //  = DaysOfWeek::Sunday;   // Initialize to Sunday
   cin >> dayInput;

   switch(dayInput)
   {
   case (int)DaysOfWeek::Sunday:
      cout << "Sunday was named after the Sun" << endl;
      break;

   case (int)DaysOfWeek::Monday:
      cout << "Monday was named after the Moon" << endl;
      break;

   case (int)DaysOfWeek::Tuesday:
      cout << "Tuesday was named after Mars" << endl;
      break;

   case (int)DaysOfWeek::Wednesday:
      cout << "Wednesday was named after Mercury" << endl;
      break;

   case (int)DaysOfWeek::Thursday:
      cout << "Thursday was named after Jupiter" << endl;
      break;

   case (int)DaysOfWeek::Friday:
      cout << "Friday was named after Venus" << endl;
      break;

   case (int)DaysOfWeek::Saturday:
      cout << "Saturday was named after Saturn" << endl;
      break;

   default:
      cout << "Wrong input, execute again" << endl;
      break;
   }
   
   return 0;
}