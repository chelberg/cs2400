e// This one fixes style issues with lec3-1, and illustrates
// initialization of variables.
//
// Written by David Chelberg
// last-modified: Tue Jan 17 14:21:02 2017
#include <iostream>
#include <cstdlib>
using namespace std;

// Is this the best place to put this?
//const float PI = 3.1415926;

int main()
{
  int x = 42;
  int y = 99;
  int z = 101;

  // where should we put this?
  //const float PI = 3.1415926;


  //  int first_variable = 0;

  //  x = 42;
  y = x;
  x = z;
  cout << x;
  cout << "\n";
  cout << y;
  cout << "\n";
  cout << z;
  //Leave out next line, what happens?
  cout << "\n";

  return(EXIT_SUCCESS);
}
