// Sample code for guessing game.
// Written by Prof. David M. Chelberg
// last-modified: Tue Feb  5 07:23:20 2019
// 
// Illustrates multiway branches and loops
// Used for an in-class programming exercise.
// This one was written ahead of time by me.
// 

#include <iostream>
#include <cstdlib>

// Need the next line to use the time function
#include <ctime>

using namespace std;

int main()
{
  const int MAX_NUMBER=10;  // Maximum number program will choose.
  const int MAX_GUESSES=10; // Maximum number guesses allowed.

  int number;               // The number the computer chooses.
  char ans;                 // Answer to whether to play again.

  // The next line is magic that will let the program generate a
  // different first random number each time the program is called.
  srand(time(NULL));

  do {
    // The next line generates a random number between 0 and MAX_NUMBER
    number=rand()%MAX_NUMBER;

    // For testing we might want to know the number
    number = 2;

    cout << "I am thinking of a number between 0 and " << MAX_NUMBER-1 << ".\n";

    int count = 0;  // How many guesses have you used?
    int guess;      // What is your current guess?
    do {
      cout << "Input your guess for the number.\n"
	   << "I'll tell you if you are high, low, or correct:";
      cin >> guess;
      ++count;
      if (guess > number) {
	cout << "You are high.\n";
      } else if (guess < number) {
	cout << "You are low.\n";
      } else if (guess == number) {
	// Note the test for this case could be omitted.
	cout << "Correct! You win!\n";
      }
    } while ((guess != number) && (count < MAX_GUESSES));

    if (count == MAX_GUESSES) {
      cout << "You are out of guesses, therefore you lose, my number was: " << number << endl;
    }

    cout << "Do you want to play again? (Y or N)";
    cin >> ans;

    // Fix lowercase inputs.
    if (ans == 'n') {
      ans = 'N';
    }

  } while (ans!='N');
      
  exit(EXIT_SUCCESS);
}
