#include <iostream>
#include <math.h>

using namespace std;

int divNumber(int number) 
{
  
  int divisionNumber = 0;
  int squareRoot = (int) sqrt(number);
 
  for(int i = 1; i<= squareRoot; i++)
  {
    
      if(number % i == 0)
      {
          divisionNumber = divisionNumber + 2;
      }
    
  }
  
  // Perfect square scenario
  if (squareRoot * squareRoot == number) 
  {
      divisionNumber--;
  }
 
  return divisionNumber;
  
}

int main() 
{

  // Will be 500 for problem
  int goalNumber;
  cout << "Enter a number: ";
  cin >> goalNumber;

  int number = 0;
  int counter = 1;

  while(divNumber(number) < goalNumber)
    {

      number = number + counter;
      counter++;
      
    }

  cout << "The answer is: " << number << endl;
  
}