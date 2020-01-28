// Sample code for conditionals
// Written by Prof. David M. Chelberg
// last-modified: Thu Jan 23 09:38:56 2020
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int n=10;

  cout << "Please input n:";
  cin >> n;

  cout << "Is n 0 < n < 10?\n";

  if (((n > 0) && (n < 10))) {
  // What is wrong, if anything with the following?
  //if ((!(n < 0) && !(n < 10))) {
  //if (0 < n < 10) {
  cout << "True\n";
  } else {
    cout << "False\n";
  }

  // else clause only practise
  //  if (!((n > 0) && (n < 10))) {
  //  if ((n <= 0) || (n >= 10)) {
  //    cout << "False\n";
  //  }
  
  return(EXIT_SUCCESS);
}
