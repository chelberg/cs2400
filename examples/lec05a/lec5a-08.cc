// Sample code illustrating for loops
// Written by Prof. David M. Chelberg
// last-modified: Tue Feb  5 09:15:43 2019
// 
// Try to guess the output of this program before running it.
//
// The premise is we want to sum the first 10 integers (0-9)
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
  int sum=0;
  cout << "First for\n";
  for (int n=-1; n<10; ++n) {
    sum+=n;
    cout << "n = " << n << " sum = " << sum << endl;
  }

  cout << "\nSecond for\n";
  // sometimes we can combine two steps by using the , separator:
  for (int n=-1, sum=0; n<10; ++n) {
    sum+=n;
    cout << "n = " << n << " sum = " << sum << endl;
    }

  cout << "\nThird for\n";
  // Or even shorter:
  // sometimes we can combine two steps by using the , separator:
  // What happens if n++ is replaced by ++n?
  for (int n=-1, sum=0; n<10; n++, sum+=n) {
    cout << "n = " << n << " sum = " << sum << endl;
  }

  cout << "\nFourth for\n";
  // What does this do?
  for (int n=-1, sum=0; n<10; sum+=n, n++, cout << "n = " << n << " sum = " << sum << endl);

  exit(EXIT_SUCCESS);
}
