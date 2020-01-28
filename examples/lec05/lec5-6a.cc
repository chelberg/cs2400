// Sample code for loops
// Written by Prof. David M. Chelberg
// last-modified: Mon Jan 23 09:07:03 2017
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int x = 10;       // x is the loop variable

  do {
    cout << x << endl;
    x-=3;
  } while (x > 0);

  cout << "x = " << x << endl;

  return(EXIT_SUCCESS);
}
