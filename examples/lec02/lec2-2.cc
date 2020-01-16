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
//  last-modified: Fri Jan 13 10:01:11 2017
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
  int size;
  cin >> size;
  int how_big;
  how_big = size * 2;

  how_big = how_big+1;

  cout << how_big << "\n";

  return(EXIT_SUCCESS);
}
