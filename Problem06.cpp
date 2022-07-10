#include <iostream>

using namespace std;


int main() 
{

  // Number will be 100 for problem
  int number;
  long long int sumSquares = 0;
  long long int squareSum = 0;

  cout << "Enter a number: ";
  cin >> number;

  for (int i = 1; i <= number; i++)
  {

    sumSquares = sumSquares + (i * i); // Sum of squares
    squareSum = squareSum + i; // Sum of numbers
    
  }

  // Squares the sum (Square of the sum)
  squareSum = squareSum * squareSum;

  cout << "The answer is: " << (squareSum - sumSquares) << endl;

}