#include <iostream>

using namespace std;


int main() 
{

  // This problem is tedious. I am going to solve this without the use of code.

  // [1-9] = 3 + 3 + 5 + 4 + 4 + 3 + 5 + 5 + 4 = 36. No practical pattern exists.

  // [10-19] = 3 + 6 + 6 + 8 + 8 + 7 + 7 + 9 + 8 + 8 = 70. No practical pattern exists.

  // [20-99] = 36 + 70 + (10*(6 + 6 + 5 + 5 + 5 + 7 + 6 + 6) + 8*36) = 748. The first half is the numbers, while the second half (in parentheses), represents the prefixes of the numbers.

  // [100-999] = (36*100) + (9*854) + (7*9) + (999*10) = 20259. The first parentheses is [1-9] occurring 100 times, 
  // the second parentheses is [1-99] occurring 9 times, the third parentheses is the word "hundred" occurring 9 times, 
  // and the fourth parentheses is "hundred and" occurring 999 times.

  // [1000] = 11.

  //  The final answer is thus 36 + 70 + 748 + 20259 + 11 = 21124.

  // I do not like this problem. Not at all.

}
