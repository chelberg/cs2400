// Sample code illustrating for loops
// Written by Prof. David M. Chelberg
// last-modified: Tue Feb  5 09:15:49 2019
// 
// Try to guess the output of this program before running it.
//
// The premise is we want to print the first 10 integers (0-9)
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
  cout << "for loop\n";
  for (int n=0; n<10;) {
    cout << "n = " << n++ << endl;
  }

  cout << "\nwhile loop\n";
  int n=0;
  while (n<10) {
    cout << "n = " << n++ << endl;
  }

  cout << "\ndo-while loop\n";
  n=0;
  do {
    cout << "n = " << n++ << endl;
  } while (n<10);

  exit(EXIT_SUCCESS);
}
