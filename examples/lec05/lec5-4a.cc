// Sample code for loops
// Written by Prof. David M. Chelberg
// last-modified: Tue Jan 28 10:44:08 2020
//
// Program Choice #2
//
// Addition of better style through the use of constants.  
//
// To be sure not to lose points, never have a "bare" constant in your
// submitted code.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  // Problem constants
  const int INITIAL_BALANCE = 5000; // How much money do you have at
				    // the start (in cents)?
  const int ENDING_BALANCE = 10000; // How much money do you want at
				    // the end (in cents)?
  const float INTEREST_RATE = 0.02; // Interest rate as a fraction
  const float ROUNDING_NUM = 0.5;   // Add this before truncating to round

  // Format and conversion constants
  const int CENTS_DIGITS = 2;       // Number of digits to show for
				    // cents.
  const float CENTS_TO_DOLLARS = 100;    // Conversion factor
  const float FRACTION_TO_PERCENT = 100; // Conversion factor

  // Problem variables
  int balance = INITIAL_BALANCE;    // Initial balance.
  int count = 0;                    // How many times through the
				    // loop, initially 0.

  cout << "This program tells you how long it takes\n"
       << "to accumulate a debt of $"
       << ENDING_BALANCE/CENTS_TO_DOLLARS 
       <<", starting with\n"
       << "an initial balance of $"
       << INITIAL_BALANCE/CENTS_TO_DOLLARS
       << " owed.\n"
       << "The interest rate is "
       << INTEREST_RATE * FRACTION_TO_PERCENT << "% per month.\n";

  // Compute how many months it will take to read the ending balance.
  while (balance < ENDING_BALANCE) {
    balance += balance * INTEREST_RATE + ROUNDING_NUM;
    count++;
  }

  cout << "After " << count << " months,\n";

  // Should the following lines be here or somewhere else in the
  // program?

  // Set output format to CENTS_DIGITS decimals (currently 2).
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(CENTS_DIGITS);

  cout << "your balance due will be $" << balance/CENTS_TO_DOLLARS
       << endl;

  return(EXIT_SUCCESS);
}
