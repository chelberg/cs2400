// Sample code illustrating sentinals in loops
// Written by Prof. David M. Chelberg
// last-modified: Tue Feb  5 09:20:30 2019
// 
// Try to guess the output of this program before running it.
//
// This one is rewritten as a for loop

#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
  int sum = 0;  // Sum of numbers, initially 0.
  int number;   // Numbers input to be summed.

  cout << "Enter as many positive numbers as you wish.\n"
       << "When done, enter a non positive number\n";

  for (cin >> number;(number >0);cin >> number) {
    // Keep reading numbers until we get a non-positive one.
    sum+=number*number;
  }

  cout << "The sum of the squares of the numbers is:" << sum << endl;

  exit(EXIT_SUCCESS);
}
