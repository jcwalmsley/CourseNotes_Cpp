// Example 12: Debugging practice
//
// main.hpp // header file
/*The header file*/

#include<iostream>

using namespace std;
//
// input.txt // input file
32
//
// main.cpp // main program
#include "main.hpp"

int main ()
 {
   float FTemp = 0;
   float CTemp = 0;

   cout<< "Enter a Farenheit temperature: ";
   cin>> FTemp;

   CTemp = (FTemp - 32.0) / (9.0/5.0);
   cout<< "\n" <<FTemp<< " in Farenheit = "  <<CTemp<< " in Celsius\n";
   return 0;
 }
// Output
/*
Enter a Farenheit temperature:
32 in Farenheit = 0 in Celsius
*/
