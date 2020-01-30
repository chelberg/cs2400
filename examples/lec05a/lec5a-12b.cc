// Sample code illustrating debugging loops
// Written by Prof. David M. Chelberg
// last-modified: Mon Feb  1 11:10:35 2016
// 
// Try to guess the output of this program before running it.
// 

#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
  int n;
  cout << "Please input the number of times to run the loop:";
  cin >> n;

  int sum = 0;
  for (int i=1; i<=n; ++i) {
    cin >> i;
    sum+=i*i;
  }

  cout << "Sum is: " << sum << endl;
}
