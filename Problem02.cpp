#include <iostream>

using namespace std;

int main() 
{

  long long maxNumber;
  long long sum = 0;
  int fib1 = 1;
  int fib2 = 2;

  // Will be 4000000 for problem
  cout << "Enter maximum number: ";
  cin >> maxNumber;

  // Runs until max number is reached
  while (fib2 <= maxNumber)
  {

    // Checks if fib2 is even
    if (fib2 % 2 == 0)
    {
      sum = sum + fib2;
    }

    // Creates next fibonacci number and updates the sequence
    int fibNext = fib1 + fib2;
    fib1 = fib2;
    fib2 = fibNext;

  }

  cout << "The answer is: " << sum << endl;

}