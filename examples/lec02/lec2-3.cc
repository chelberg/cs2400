//******************************************************************* 
//  Program:  Example Program for Lecture 2
//                                                                     
//  Author:  David M. Chelberg
//  Email: chelberg@ohiou.edu
//  ID: P?????????
//                                                                    
//  Course: CS2400
//                                                                    
//  Description:  Shows variable declarations
//  last-modified: Thu Jan 17 09:08:34 2019
//*******************************************************************
#include <iostream>
#include <cstdlib>

using namespace std;

//******************************************************************
//  Function: main
//                                                                  
//  Purpose:  To start the whole thing! And to test variable declarations
//                                                                  
//  Calls:  Nothing
//******************************************************************
int main()
{
  int x, y, z;
  x = 42;
  y = x;
  x = z;
  cout << x;
  cout << "\n";
  cout << y;
  cout << "\n";
  cout << z;
  // Leave out next line, what happens?
  cout << "\n";

  return(EXIT_SUCCESS);
}
