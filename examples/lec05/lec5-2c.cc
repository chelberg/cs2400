// Sample code for loops
// Written by Prof. David M. Chelberg
// last-modified: Thu Jan 24 13:45:19 2013
// 
// Shows do-while loop.

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  char choice;
  
  cout << "Please input your choice (Y/N):";
  cin >> choice;
  while ((choice != 'Y') && (choice != 'N')) {
    cout << "Please input your choice (Y/N):";
    cin >> choice;
    // What does the following code do?
    /*
    if ((choice != 'Y') && (choice != 'N')) {
      while (choice != '\n') {
    	cin.get(choice);
      }
    }
    */
  } 
  
  cout << "Your choice was '" << choice << "'\n";

  return(EXIT_SUCCESS);
}
