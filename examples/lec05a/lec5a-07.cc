// Sample code illustrating blocks
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
  int a=1;
  cout << "1.) a = " << a << endl;
  {
    // What happens if we comment out the next line?
    int a=2;
    cout << "2.) a = " << a << endl;
    a=4;
  }
  cout << "3.) a = " << a << endl;
  if (a==1) {
    int a=42;
    cout << "4.) a = " << a << endl;
  } else {
    a=10;
    cout << "5.) a = " << a << endl;
  }
  cout << "6.) a = " << a << endl;

  exit(EXIT_SUCCESS);
}
