#include <iostream>

using namespace std;


int main() 
{

  int num1 = 0;
  int num2 = 0;
  int amic_sum = 0;

  for(int i = 1; i < 10000; i++)
  {
    
    num1 = 0;

    // Gets the sum of divisors for first number
    for(int j = 1; j < i; j++)
    {
      
      if((i % j) == 0)
      {
        
        num1 = num1 + j;
        
      }
      
    }

    num2 = 0;

    // Gets the sum of divisors for second number
    for(int k = 1; k < num1; k++)
    {
      
      if((num1 % k) == 0)
      {
        
        num2 = num2 + k;
        
      }
      
    }

    // Adds to sum if problem conditions are met
    if(num2 == i && num2 != num1)
    {
      
      amic_sum = amic_sum + i;
      
    }
    
  }

  cout << "The answer is: " << amic_sum << endl;
  
}