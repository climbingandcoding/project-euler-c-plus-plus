#include <iostream>

using namespace std;

// Uses Euclid's Algorithm to find greatest common divisor
long long greatestCommonDenom(long long num1, long long num2)
{

  while (num1 != 0)
  {

    long long num3 = num1;
    num1 = num2 % num1;
    num2 = num3;
      
  }

  return num2;
  
}

// Finds least common multiple
long long leastCommonMult(long long num1, long long num2)
{
  
  long long answer = num1 * (num2 / greatestCommonDenom(num1, num2));
  return answer;
 
}

int main()
{

  // Will be 20 for problem
  int number;
  cout << "Enter a number: ";
  cin >> number;
  
  long long answer = 1;

  for (int i = 2; i <= number; i++)
  {
     answer = leastCommonMult(answer, i); 
  }

  cout << "The answer is: " << answer << endl;
 
}