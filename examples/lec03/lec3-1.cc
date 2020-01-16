// Shows basics of variables.
//
// Written by David Chelberg
// last-modified: Tue Jan 17 14:22:07 2017
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int x, y, z=-1;
  /*  x = 42;
  y = x;
  x = z;
  */
  cin >> x >> y >> z;

  cout << x;
  cout << "\n";
  cout << y;
  cout << "\n";
  cout << z;
  //Leave out next line, what happens?
  cout << "\n";

  return(EXIT_SUCCESS);
}
