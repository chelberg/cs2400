// Sample code for boolean values, and precedence.
// Written by Prof. David M. Chelberg
// last-modified: Fri Jan 25 16:51:47 2013
// 
// Written to demonstrate pitfalls of boolean expressions
// Note: this is bad style, do not write code like this!
// 

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  enum Direction {NORTH, SOUTH, EAST, WEST};

  cout << "NORTH = " << NORTH << endl;
  cout << "SOUTH = " << SOUTH << endl;
  cout << "EAST = " << EAST << endl;
  cout << "WEST = " << WEST << endl;

  // Or could we do:
  /*
  Direction counter=NORTH;
  while (counter <= WEST) {
    cout << "counter = " << counter++ << endl;
  }
  */

  /*
  // Fix for above
  Direction counter=NORTH;
  while (counter <= WEST) {
    cout << "counter = " << counter << endl;
    counter = Direction(counter + 1);
  }
  */

  Direction my_heading = NORTH;
  
  // What type is my_heading?

  cout << "my_heading = " << my_heading << endl;

  /*
  enum Direction {NORTH, EAST, SOUTH, WEST};

  cout << "NORTH = " << NORTH << endl;
  cout << "SOUTH = " << SOUTH << endl;
  cout << "EAST = " << EAST << endl;
  cout << "WEST = " << WEST << endl;

  Direction my_heading = NORTH;
  
  // What type is my_heading?
  cout << "my_heading = " << my_heading << endl;
  */

  Direction your_heading = WEST;
  
  cout << "your_heading = " << your_heading << endl;

  cout << "\n-----------------------\n";

  // What happens if we used NORTH, SOUTH, EAST, and WEST here?
  enum Direction1 {NEW_NORTH=42, NEW_SOUTH=13, NEW_EAST, NEW_WEST=-10};
  Direction1 new_heading = NEW_EAST;

  // Can we do the following?
  //Direction1 old_heading = EAST;

  // What will the following output?
  cout << "new_heading = " << new_heading << endl;

  cout << "\n-----------------------\n";
  // Coins!

  enum Coin {PENNY = 1, NICKLE = 5, DIME = 10, QUARTER = 25, 
	     HALF_DOLLAR = 50, DOLLAR = 100};

  Coin change1=DIME;
  Coin change2=QUARTER;
  int sum = DIME + QUARTER;

  cout << "change1 = " << change1 << endl;
  cout << "change2 = " << change2 << endl;
  cout << "sum = " << sum << endl;

  // Which of the following will work?
   // Coin change3 = change1 + change2;
   // Coin change4 = NICKLE + NICKLE;
   // cout << "change4 = " << change4 << endl;
  //  Coin change5 = 10;
   // cout << "change5 = " << change5 << endl;

  Coin change6 = Coin(10);
  cout << "change6 = " << change6 << endl;

  Coin change7 = Coin(NICKLE + NICKLE);
  cout << "change7 = " << change7 << endl;

  cout << "Coin(NICKLE + NICKLE) == DIME is " 
       << (Coin(NICKLE + NICKLE) == DIME) << endl;
  cout << "coercion = " << Coin(DIME + QUARTER) << endl;

  return(EXIT_SUCCESS);
}
