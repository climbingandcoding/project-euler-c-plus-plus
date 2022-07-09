#include <iostream>

using namespace std;

// Finds the sum of multiples of '3' and '5' up to 'number'
int summation(int number)
{

  int sum = 0;

  while (number > 0)
  {

    // Multiple found
    if (number % 3 == 0 || number % 5 == 0)
    {
      sum = sum + number;
    }

    number--;

  }

  return sum;
  
}

int main()
{

  // Will be 1000 for problem
  int number;
  
  cout << "Enter a number: ";
  cin >> number;

  // Asks for summation below the desired number of 1000
  int answer = summation(number - 1);

  cout << "The answer is: " << answer << endl;

}