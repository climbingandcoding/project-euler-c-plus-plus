#include <iostream>

using namespace std;


int main() 
{

  // Will be 20 for problem
  int gridSize;
  cout << "Enter a number: ";
  cin >> gridSize;
  
  long totalPaths = 1;

  // https://en.wikipedia.org/wiki/Binomial_coefficient
  for(int i = 0; i < gridSize; i++)
  {

    totalPaths = totalPaths * ((2 * gridSize) - i);
    totalPaths = totalPaths / (i + 1);

  }

  cout << "The answer is: " << totalPaths << endl;

}