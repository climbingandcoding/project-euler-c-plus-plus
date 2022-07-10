#include <iostream>

using namespace std;


int main()
{
  
  long answer = 0;
  char current[50 + 1];

  // While there is something there
  while(scanf("%s", current) == 1) 
  {
    
    // We only need three more, because 10 * 50 = 500
    current[10 + 3] = '\0';

    long temp;
    sscanf(current, "%ld", &temp);

    answer = answer + temp;
    
  }

  cout << "The answer is: " << answer << endl;
  
}
