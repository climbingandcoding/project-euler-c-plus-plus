#include <iostream>
#include<cmath>

using namespace std;

int main()
{

  long long number;

  // Will be 600851475143 for problem
  cout << "Enter a number: ";
  cin >> number;

  // Checks all numbers under sqrt(number) since any composite number can be written as the factor of 2 other numbers
  for (long long i = 2; i * i <= number; i++)
  {

    while (number % i == 0 && number != i)
    {

      number = number / i;

    }

  }

  cout << "The answer is: " << number << endl;

}