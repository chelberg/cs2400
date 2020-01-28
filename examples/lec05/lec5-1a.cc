// Sample code for loops
// Written by Prof. David M. Chelberg
// last-modified: Fri Jan 20 09:12:55 2017
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int count_down;   // How many times to do the loop

  cout << "How many greetings do you want? ";
  cin >> count_down;

  // Are there any issues with using !=?
  // What bad things might happen?
  while (count_down != 0) {
    cout << "Hello ";
    count_down -= 1;
  }
  cout << "\nThat's all!\n";

  return(EXIT_SUCCESS);
}
