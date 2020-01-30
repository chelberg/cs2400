// Sample code with a switch example
// Written by Prof. David M. Chelberg
// last-modified: Mon Jan 28 20:35:33 2013
// 
// What happens without break statements in a switch statement?
// Modified version of lec5a-6.cc
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
  case NICKLE:
    cout << "Have a nickle.\n";
  case DIME:
    cout << "Have a dime.\n";
  case QUARTER:
    cout << "Have a quarter.\n";
  case HALF_DOLLAR:
    cout << "Have a half dollar.\n";
  case DOLLAR:
    cout << "Have a dollar.\n";
  default:
    cout << "I don't have a single coin for that amount of change.\n";
  }
  return(EXIT_SUCCESS);
}
