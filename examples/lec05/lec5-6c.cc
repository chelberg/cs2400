// Sample code for loops
// Written by Prof. David M. Chelberg
// last-modified: Mon Jan 23 09:07:03 2017
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  const int START_VALUE=10;  // This is the value to start the loop

  int x = START_VALUE;       // x is the loop variable

  do {
    if (x>0) {
      cout << x << endl;
      x-=3;
    }
  } while (x > 0);

  cout << "x = " << x << endl;

  return(EXIT_SUCCESS);
}
