#include <iostream>
#include <math.h>

using namespace std;


int main() 
{

  int number;

  cout << "Enter a number: ";
  cin >> number;

  int answer;
  int sum = 1;
  int sequence[number + 1];
  sequence[0] = 1;
  sequence[1] = 1;
  int min = floor(sqrt(number));

  for(int i = 2; i <= min; i++)
  {

    if(sequence[i] == 0)
    {

      for (int j = i + i; j <= number; j = j + i)
      {

        if(sequence[j] == 0)
        {
          sequence[j] = 1;
          sum = sum + j;
        }

          
      }

      
    }
 
  }

  answer = number * (number + 1) / 2 - sum;
  cout << "The answer is: " << answer << endl;
  
}