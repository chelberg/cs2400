// Shows size of different data types on different systems.
//
// Written by David M. Chelberg
// last-modified: Wed Jan 21 10:46:44 2015
// 
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main ()
{
  char c;

  cout << "size of char is " << sizeof(c) << endl;

  short s;
  cout << "size of short is " << sizeof(s) << endl;

  int i;
  cout << "size of int is " << sizeof(i) << endl;

  long l;
  cout << "size of long is " << sizeof(l) << endl;

  long long ll;
  cout << "size of longlong is " << sizeof(ll) << endl;

  float f;
  cout << "size of float is " << sizeof(f) << endl;

  double d;
  cout << "size of double is " << sizeof(d) << endl;

  long double dd;
  cout << "size of long double is " << sizeof(dd) << endl;

  exit(EXIT_SUCCESS);
}
