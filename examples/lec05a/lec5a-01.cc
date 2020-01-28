// Sample code for boolean values, and precedence.
// Written by Prof. David M. Chelberg
// last-modified: Fri Jan 25 15:29:14 2013
// 
// Written to demonstrate order of operations and boolean operations
// Note: this is bad style, do not write code like this!
// 

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  // Check out our example to see if we got it right.
  cout << "The value of !1+3*4-4<3*0==1&&1!=2||true is ";
  if (!1+3*4-4<3*0==1&&1!=2||true) {
    cout << "true\n";
  } else {
    cout << "false\n";
  }

  // Check out just part of the example to see if we got it right.
  cout << "The value of !1+3*4-4<3*0==1&&1!=2 is ";
  if (!1+3*4-4<3*0==1&&1!=2) {
    cout << "true\n";
  } else {
    cout << "false\n";
  }

  // Simple case
  cout << "!1 = " << !1 << endl;

  // How are truth values represented internally?
  cout << "The output value true is:" << true << endl;
  cout << "The output value false is:" << false << endl;
    
  return(EXIT_SUCCESS);
}
