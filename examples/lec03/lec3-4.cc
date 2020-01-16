// Sample code
// Written by David M. Chelberg
// last-modified: Tue Jan 22 11:25:24 2013
//
// Short and simple, but it leaves out many things that should be in
// your programs (e.g. prompting the user for input).  lec3-5a.cc
// fixes these problems.

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  double price;  // Price per unit
  int number;    // Number of units

  // Shouldn't we prompt the user???

  cin >> price >> number;

  // Echo back input to user.
  cout << "price " << price << " number "
       << number << endl;

  // Next line can output the total cost.
  cout << "Total cost is " << price * number << endl;

  return(EXIT_SUCCESS);

}
