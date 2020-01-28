// Sample code for loops
// Written by Prof. David M. Chelberg
// last-modified: Tue Jan 28 06:30:28 2020
// 
// Shows do-while loop.

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  char choice;
  do {
    cout << "Please input your choice (Y/N):";
    cin >> choice;
  } while ((choice != 'Y') && (choice != 'N'));
  
  cout << "Your choice was '" << choice << "'\n";

  return(EXIT_SUCCESS);
}
