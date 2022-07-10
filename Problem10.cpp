#include <iostream>

using namespace std;

// Returns whether a number is prime
bool isPrime(int number)
{
  
  if (number < 2)
  {
    return false;
  }

  if (number % 2 == 0)
  {
    return number == 2;
  }
		
  if (number % 3 == 0)
  {
    return number == 3;
  }

  if (number % 5 == 0)
  {
    return number == 5;
  }

  if (number % 7 == 0)
  {
    return number == 7;
  }

  for (int i = 11; i * i <= number; i++) 
  {
    
    if (number % i == 0)
    {
      return false;
    }
    
  }

  return true;
  
}


int main()
{
  
  long long sum = 0;

  // Loops through all digits and adds the current value to sum if it is prime
  for (int i = 2; i < 2000000; i++) 
  {
    
    if (isPrime(i))
    {
      sum = sum + i;
    }
    
  }

  cout << "The answer is: " << sum << endl;
  
}
