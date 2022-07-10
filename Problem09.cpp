#include <iostream>

using namespace std;

int main() 
{

  int answer = -1;

  // Loops through all possible combinations to find the triplet
  for (int a = 1; a < 1000; a++)
  {
    
      for (int b = 1; b < 1000; b++)
      {
        
          for (int c = 1; c < 1000; c++)
          {
            
              if ((a * a + b * b == c * c) && (a + b + c == 1000))
              {
                answer = a * b * c;
              }
            
          }
        
      }
    
  }

  cout << "The answer is: " << answer << endl;

}
