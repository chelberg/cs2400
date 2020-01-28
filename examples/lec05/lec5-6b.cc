// Sample code for loops
// Written by Prof. David M. Chelberg
// last-modified: Thu Jan 24 08:59:43 2019
//
// This one fixes the differences between the while loop and the
// do-while loop by adding an if statement.
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int x = 10;       // x is the loop variable

  do {
    if (x>0) {
      cout << x << endl;
      x-=3;
    }
  } while (x > 0);

  cout << "x = " << x << endl;

  return(EXIT_SUCCESS);
}
