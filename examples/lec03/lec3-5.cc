// What happens when input is garbage?
//
// Written by David M. Chelberg
// last-modified: Wed Jan 21 10:46:44 2015
// 
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  double price=1000.0;
  int number=1000;
  int second_number= -1;

  cin >> price >> number;
  cout << "Price = " << price << " Number = " << number << endl;

  cout << "Try again: ";
  cin >> second_number;

  cout << "You typed:" << second_number << endl;

  return(EXIT_SUCCESS);
}
