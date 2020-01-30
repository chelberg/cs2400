// Sample code illustrating sentinals in loops
// Written by Prof. David M. Chelberg
// last-modified: Fri Jan 27 09:31:58 2017
// 
// Try to guess the output of this program before running it.
//
// Can you rewrite this to use a do-while loop?

#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
  int sum = 0;  // Sum of numbers, initially 0.
  int number;   // Numbers input to be summed.

  cout << "Enter as many positive numbers as you wish.\n"
       << "When done, enter a non positive number\n";

  cin >> number;// Read one number

  // Keep reading numbers until we get a non-positive one.
  while (number > 0) {
    sum+=number*number;
    cin >> number;
  }

  cout << "The sum of the squares of the numbers is:" << sum << endl;

  exit(EXIT_SUCCESS);
}
