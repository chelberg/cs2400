// Sample code for loops
// Written by Prof. David M. Chelberg
// last-modified: Thu Jan 24 13:49:25 2013
//
// Shows do-while loop
// Adds code to do more input checking.
//
// This one also comments better, and follows the style guidelines
// more completely.

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  char choice;  // User choice one of 'Y' or 'N'

  // Read in the user's choice, checking to be sure it is correct.
  do {
    cout << "Please input your choice (Y/N):";
    cin >> choice;
    
    // Added code to deal with incorrect inputs and lower/upper case.
    // If user inputs lower case y or n, change them to upper case.
    if (choice == 'y') {
      choice = 'Y';
    }

    // Deal with 'n'
    if (choice == 'n') {
      choice = 'N';
    }
    
    // If the user inputs an incorrect choice, tell them so, and ask
    // again.

    // Why don't we just add two more cases to the following if
    // statement instead of using the code above?
    if ((choice != 'Y') && (choice != 'N')) {
      cout << "Incorrect input, you typed a '"
	   << choice
	   << "', please try again.\n";
    }

  } while ((choice != 'Y') && (choice != 'N'));

  cout << "Your choice was '" << choice << "'.\n";

  return(EXIT_SUCCESS);
}
