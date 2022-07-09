#include <iostream>

using namespace std;

// Creates palindrome to be used
int createPalindrome(int number)
{

  unsigned int answer = number * 1000; // Creates back 3 slots (Ex: 921000)
  
  answer = answer + number / 100; // Adds left-most number to right most slot (921009)
  
  answer = answer + ((number / 10) % 10) * 10; // .b. => // Adds 2nd left-most number to 2nd right most slot (921029)
  
  answer = answer + (number % 10) * 100; // Adds 3rd left-most number to 3rd right most slot (921129)
  
  return answer;

}

int main() 
{

  // Max for problem will be 999^2 = 998001
  int maxNumber;
  bool found = false;

  cout << "Enter a number: ";
  cin >> maxNumber;

  // Finds all palindromes starting at largest
  for (int i = maxNumber / 1000; i >= 100 && !found; i--)
  {

    // Creates six digit palindrome to check
    int palindrome = createPalindrome(i);

    // Size overflow
    if (palindrome >= maxNumber)
    {
      continue;
    }

    // Checks factors
    for (int j = 100; j * j <= palindrome; j++)
    {
      
      if (palindrome % j == 0)
      {
          
        int other = palindrome / j;

        // Must be 3 digits, which this checks!
        if (other < 100 || other > 999)
        {
          continue;
        }

        cout << "The answer is: " << palindrome << endl;
        found = true;
        break;
        
      }
    }
  }

}