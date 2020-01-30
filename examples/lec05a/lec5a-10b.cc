// Sample code illustrating sentinals in loops
// Written by Prof. David M. Chelberg
// last-modified: Mon Jan 23 09:30:10 2017
// 
// Try to guess the output of this program before running it.
//
// This one is rewritten as a do-while loop.  Is there a bug in it??
//
// Can you rewrite it as a for loop?
// 

#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
  int sum = 0;  // Sum of numbers, initially 0.
  int number;   // Numbers input to be summed.

  cout << "Enter as many positive numbers as you wish.\n"
       << "When done, enter a non positive number\n";

  // Keep reading numbers until we get a non-positive one.
  do {
    cin >> number;// Read one number
    sum+=number*number;
  }  while (number > 0);

  cout << "The sum of the squares of the numbers is:" << sum << endl;

  exit(EXIT_SUCCESS);
}
