#include <iostream>

using namespace std;

// Checks whether number is prime
bool isPrime(int number) 
{

  if (number <= 1) 
  {
    return false;
  }

  if (number == 2) 
  {
    return true;
  }

  // Evens can't be prime
  if (number % 2 == 0) 
  {
    return false;
  }

  int holder = 3;     

  // Only need to check up to the square root of a number for prime
  while ((holder * holder) <= number) 
  {
    
    if (number % holder == 0) 
    {
        return false;
    } 
    else 
    {
      holder = holder + 2;
    }
    
  }

  return true;
  
}


int main() 
{

  // maxPrime will be 10001 for problem
  int maxPrime;
  int count = 1;
  int number = 1;

  cout << "Enter a number: ";
  cin >> maxPrime;

  // Adds up amount of primes found until 10001 is reached
  while (count < maxPrime) 
  {
    
    number = number + 2;
    
    if (isPrime(number)) 
    {
        count++;
    }
    
  }

  cout << "The answer is: " << number << endl;
  
}