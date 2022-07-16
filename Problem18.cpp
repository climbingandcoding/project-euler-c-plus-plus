#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() 
{

  // Stores the triangle from problem in easy-to-access way
  vector<vector<int>> treeVector = {{75},
    {95,64},
    {17,47,82},
    {18,35,87,1},
    {2,4,82,47,65},
    {19,1,23,75,3,34},
    {88,2,77,73,7,63,67},
    {99,65,4,28,6,16,7,92},
    {41,41,26,56,83,4,8,7,33},
    {41,48,72,33,47,32,37,16,94,29},
    {53,71,44,65,25,43,91,52,97,51,14},
    {7,11,33,28,77,73,17,78,39,68,17,57},
    {91,71,52,38,17,14,91,43,58,5,27,29,48},
    {63,66,4,68,89,53,67,3,73,16,69,87,4,31},
    {4,62,98,27,23,9,7,98,73,93,38,53,6,4,23}};


  // Handles rows
  for (int i = 13; i >= 0; i--)
  {

    // Handles columns
    for (int j = 0; j <= i; j++)
    {

      // Adds maximum possibility to total sum
      treeVector[i][j] = treeVector[i][j] + max(treeVector[i + 1][j], treeVector[i + 1][j + 1]);
  
    }
  
  }

  // Maximum item at top of vector
  cout << treeVector[0][0] << endl;

}