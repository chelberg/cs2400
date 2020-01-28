// Sample code for loops
// Written by Prof. David M. Chelberg
// last-modified: Tue Jan 22 13:42:22 2013
//
// Program Choice #2

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int balance = 5000;  // Initial balance.
  int count = 0;       // How many times through the loop

  cout << "This program tells you how long it takes\n"
       << "to accumulate a debt of $100, starting with\n"
       << "an initial balance of $50 owed.\n"
       << "The interest rate is 2% per month.\n";

  while (balance < 10000) {
    // Why the .5?
    balance += balance * .02 + 0.5;
    count++;
  }

  cout << "After " << count << " months,\n";

  // Set output format to 2 decimals
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "your balance due will be $" << balance/100.0
       << endl;

  return(EXIT_SUCCESS);
}
