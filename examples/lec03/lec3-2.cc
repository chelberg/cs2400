// Reuse test programs to speed development
// Or cut and paste outline of a working program.
//
// Written by David M. Chelberg
// last-modified: Wed Jan 21 10:46:19 2015
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
  int x;
  int y;
  int z;

  x = 42;
  y = x;
  x = z;


  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "$" << 12.5 << endl;
  cout << 12.515 << endl;
  cout << 12.525 << endl;
  cout << 12.5245 << endl;

  // What do the following do?
  //cout.precision(20);
  //cout << M_PI << endl;

  cout << x;
  cout << "\n";
  cout << y;
  cout << "\n";
  cout << z;
  // Leave out next line, what happens?
  cout << "\n";

  return(EXIT_SUCCESS);
}
