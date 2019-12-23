/*
    A sample solution to the Vector and Iterator Programming Quiz:
*/
// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it

//TODO: Add the necessary libraries
#include "main.hpp"

int main ()
{
  //TODO: create a vector of floats
   vector<float> vFloat;

  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";

  //TODO: add elements to the library

  std::cout<<"\n\nAdding 10 elements to the vector\n";

  //TODO: assign the value 8.8 to 10 elements of the vector
   vFloat.assign(10, 8.8);
   std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";


  //TODO: Complete the Print function in main.hpp
  // Call the function here to print out each element of vFloat
  printVector(vFloat);

  return 0;
}

A sample solution of main.hpp

// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<float> vIn);

 void printVector(vector<float> vIn)
 {//printing the contents of vIns
    //TODO: Complete the function
    vector<float>::iterator it;
    for (it = vIn.begin(); it != vIn.end(); ++it)
        cout<<*it<<" ";
 }
