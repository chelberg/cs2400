// Type conversion test
// char vs. int
// Written by David M. Chelberg
// last-modified: Fri Jan 23 08:32:46 2015
//
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

  char letter = 'A';
  int i = letter;

  cout << "i = " << i
       << " letter = " << letter << endl;

  i = 66;
  letter = i;
  
  cout << "i = " << i
       << " letter = " << letter << endl;

  double double_precision = i;
  double double_char = letter;

  cout << "double_precision = " << double_precision
       << " double_char = " << double_char << endl;

  return(EXIT_SUCCESS);
}
