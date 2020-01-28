// Sample code for loops
// Written by Prof. David M. Chelberg
// last-modified: Fri Jan 20 09:21:31 2017
//
// Program Choice #1

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  double balance = 50.00;  // Initial balance.
  int count = 0;           // How many times through the loop

  cout << "This program tells you how long it takes\n"
       << "to accumulate a debt of $100, starting with\n"
       << "an initial balance of $50 owed.\n"
       << "The interest rate is 2% per month.\n";
  while (balance < 100.00) {
    // What other way could we write the next line?
    //    balance = balance + 0.02 * balance;
    //    balance+= 0.02 * balance;
    //    balance*=1.02;
    double interest = .02 *balance;
    interest += 0.005;
    interest = int(interest*100.0)/100.0;
    balance +=interest;
    count++;
  }

  cout << "After " << count << " months,\n";

  // Set output format to 20 decimals
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(20);

  // What is the value 0.005 internnaly represented as? Is there any
  // roundoff error?  Let's see by printing out 20 digits of it.
  cout << 0.005 << endl;

  // Change precision back to 2 for the balance in dollars and cents.
  cout.precision(2);
  cout << "your balance due will be $" << balance << endl;
  return(EXIT_SUCCESS);
}
