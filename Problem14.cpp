#include <iostream>

using namespace std;

// Size of the generated collatz sequence
long long sizeCollatz(long long int number)
{
  
    long long answer = 0; 
    while (number != 1) 
    {
        
        number = (number % 2 == 0) ? (number / 2) : (number * 3) + 1; 
        answer++;
      
    }
    
    return answer;
  
}


int main()
{
  
  long long int largeChainNumber = 0;
  long long int largestChainSize = 0;
    
  for (long long int i = 1; i < 1000000; i++)
  {

    // Finds current largest
    long long int currentChainSize = sizeCollatz(i);
    if (currentChainSize > largestChainSize)                                    
    {
          
      largeChainNumber = i;
      largestChainSize = currentChainSize;
          
    }
      
  }
    
  cout << "The answer is: " << largeChainNumber << endl;
  
}