//******************************************************************* 
//  Program:  Example Program for Lecture 2
//                                                                     
//  Author:  David M. Chelberg
//  Email: chelberg@ohiou.edu
//  ID: P?????????
//                                                                    
//  Course: CS2400
//                                                                    
//  Description:  Shows simple input and output
//  last-modified: Wed Jan 14 09:28:24 2015
//*******************************************************************
#include <iostream>
#include <cstdlib>

using namespace std;

//******************************************************************
//  Function: main
//                                                                  
//  Purpose:  To start the whole thing! And to test basic input and
//  output c++ functions.
//                                                                  
//  Calls:  Nothing
//******************************************************************

int main()
{
  int number_of_pods;  // input by user
  int peas_per_pod;    // input by user
  int total_peas;      // Calculated by program

  cout << "Press return after entering a number.";
  cout << "Enter the number of pods:\n";

  cin >> number_of_pods
      >> peas_per_pod;

  //  cout << "Enter the number of peas in a pod:\n";

  // Calculate the total number of peas
  total_peas = number_of_pods * peas_per_pod;

  // Output the results
  cout << "If you have ";
  cout << number_of_pods;
  cout << " pea pods\n";
  cout << "and ";
  cout << peas_per_pod;
  cout << " peas in each pod, then\n";
  cout << "you have ";
  cout << total_peas;
  cout << " peas in all the pods.\n";

  return EXIT_SUCCESS;
}
