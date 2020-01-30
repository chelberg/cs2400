// Sample code illustrating break statements in loops
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
  /*
  int sum=0;

  cout << "First for\n";
  for (int n=-1; n<10; ++n) {
    sum+=n;
    cout << "n = " << n << " sum = " << sum << endl;
    if (n==0) {
      break;
    }
  }

  cout << "\nNested for loops\n";
  for (int i=0; i<10; ++i) {
    for (int j=i; j<10; ++j) {
      cout << "i = " << i << " j = " << j << endl;
      if (j == 5) break;
    }
  }

  */

  cout << "\nWhile loop\n";
  int i=1;
  int j=1;
  while (i!=20) {
    j*=2;
    cout << "i = " << i << " j= "<< j<< endl;
    if (j > 1024) {
      break;
    }
    i++;
  }

  exit(EXIT_SUCCESS);
}
