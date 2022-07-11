#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main()
{

  // Will be 1000 for problem
  int power;
  cout << "Enter a number: ";
  cin >> power;
  
	double number = pow(2, power);
	int answer = 0;

  // Goes through entire 'number' string
	for (char ch : to_string(number)) 
  {

    // Skip to next character if current is 0 or non-numeric
		if (ch == '0' || !isdigit(ch))
    {
      continue;
    }

    // 48 is '0', which keeps answer in 'string' format
		answer = answer + static_cast<int>(ch) - 48;
    
	}
  
	cout << "The answer is: " << answer << '\n';
  
}