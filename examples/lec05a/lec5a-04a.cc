// Sample code for guessing game.
// Written by Prof. David M. Chelberg
// last-modified: Fri Jan 25 16:51:52 2013
// 
// Illustrates multiway branches and loops
// Framework for in-class exercise
// 

#include <iostream>
#include <cstdlib>

// Need the next line to use the time function
#include <ctime>

using namespace std;

int main()
{
  const int MAX_NUMBER=10;  // Maximum number program will choose.
  int number;               // The number the computer chooses.

  // The next line is magic that will let the program generate a
  // different first random number each time the program is called.
  srand(time(NULL));

  // The next line generates a random number between 0 and MAX_NUMBER
  number=rand()%MAX_NUMBER;

  cout << "I am thinking of a number between 0 and " << MAX_NUMBER-1 << ".\n";

  // Your code goes here






























  exit(EXIT_SUCCESS);
}
