// Sample code with a switch example
// Written by Prof. David M. Chelberg
// last-modified: Tue Feb  5 09:16:57 2019
// 
// Illustrates use of a switch statement
//

#include <iostream>
#include <cstdlib>

using namespace std;

// enums may be declared even before main.
enum Coin {PENNY = 1, NICKLE = 5, DIME = 10, QUARTER = 25, 
	   HALF_DOLLAR = 50, DOLLAR = 100};

int main()
{
  int change;

  cout << "Input amount of change needed:";
  cin >> change;
  switch (change) {
  case PENNY:
    cout << "Have a penny.\n";
    break;
  case NICKLE:
    cout << "Have a nickle.\n";
    break;
  case DIME:
    cout << "Have a dime.\n";
    break;
  case QUARTER:
    cout << "Have a quarter.\n";
    break;
  case HALF_DOLLAR:
    cout << "Have a half dollar.\n";
    break;
  case DOLLAR:
    cout << "Have a dollar.\n";
    break;
  default:
    if (change < 0) {
      cout << "Please don't input negative money amounts.\n";
    } else {
      cout << "I don't have a single coin for that amount of change.\n";
    }
    break;
  }
  return(EXIT_SUCCESS);
}
