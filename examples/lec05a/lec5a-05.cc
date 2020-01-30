// Sample code with nested if's
// Written by Prof. David M. Chelberg
// last-modified: Wed Jan 25 11:18:48 2017
// 
// Illustrates pitfalls of nested if's
// Yet another reason to listen to my style guidelines! :)

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float temperature;
  
  // How can we test this code?
  // What values should we use?
  // How about -10.5, -5, 0, 5?
  cout << "Enter the temperature today:";
  cin >> temperature;

  if (temperature < 0.0)
    if (temperature < -10.0)
      cout << "It is too cold.\n";
  else 
    cout << "At least it is above freezing.\n";


  exit(EXIT_SUCCESS);
}
