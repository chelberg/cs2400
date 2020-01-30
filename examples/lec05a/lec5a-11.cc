// Sample code illustrating debugging loops
// Written by Prof. David M. Chelberg
// last-modified: Mon Jan 28 20:43:57 2013
// 
// Try to guess the output of this program before running it.
// 

#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
  // Program to compute the product of the numbers 2-5.
  int number = 2;
  int product = 1;

  while (number < 5) 
    //    cout << "number = " << number << " product = " << product << endl;
    number++;
    product *= number;


  cout << "The product is: " << product << endl;
}
