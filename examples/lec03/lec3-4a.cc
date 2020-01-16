// Sample code
// Written by David M. Chelberg
// last-modified: Tue Jan 22 13:41:17 2013
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  double price;  // Price per unit
  int number;    // Number of units

  // prompt the user for input
  cout << "Please enter the number of items to purchase: ";

  cin >> number;

  cout << "Please enter the price of each item: ";

  cin >> price;

  //  cin >> price >> number;

  // Echo back the input values, using 2 decimal digits for dollars/cents.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "price $" << price << " number "
       << number << endl;

  // Compute and output the total cost.
  cout << "Total cost is $" << price * number << endl;

  return(EXIT_SUCCESS);

}
