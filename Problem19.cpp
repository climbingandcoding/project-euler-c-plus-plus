#include <iostream>

using namespace std;


//https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week
int sunday(int year, int month, int day)
{

  int count;
  int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  // Year
  count = (year - 1900) * 365 + (year - 1901) / 4;
  
  // Month
  for (int i = 0; i < month - 1; i++)
  {

    count = count + daysInMonths[i];
    
  }

  if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
  {
    
    count++;
    
  }
  
  // Day
  count = count + day;
  return count;
  
}


int main()
{
  
  int totalAmount = 0;

  // Loops through all month/year combinations from 1901 to 2001
  for (int y = 1901; y < 2001; y++)
  {
    
    for (int m = 1; m < 13; m++)
    {

      // Checks for first of the month stipulation given in problem
      if (sunday(y, m, 1) % 7 == 0)
      {
        
        totalAmount++;
        
      }
        
    }
  
  }

  cout << totalAmount << endl;
  
}