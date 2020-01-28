// Sample code for boolean values, and precedence.
// Written by Prof. David M. Chelberg
// last-modified: last-modified: Fri Jan 25 15:45:54 2013
// 
// Written to demonstrate pitfalls of boolean expressions
// Note: this is bad style, do not write code like this!
// Note: compiler warns of a possible problem here.
// 

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

  int time = 9;   // How many seconds we took to do something
  int limit = 10; // How many seconds we had to do something
  
  // What does the following statement mean?
  if (!time > limit) {
    cout << "we didn't take too much time\n";
  } else {
    cout << "we took too much time\n";
  }

  return(EXIT_SUCCESS);
}
