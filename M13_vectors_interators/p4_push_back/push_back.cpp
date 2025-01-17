/*
    ::Assign will write over elements in the vector, which is what we want in some cases, but in others it is not desired.

    We can add elements to the end (or back) of a vector using ::push_back.

    Let's look at an example using push_back.

    Note in the program:

    We added an element by pushing it on to the back of the vector.
    In this case we put an element with value 24 on the end of the vector.

    vectorInts.push_back(24);

    We can add as many elements as we wish using the push_back function.
    In this example we added four elements to the vector.
    
        vectorInts.push_back(24);
        vectorInts.push_back(25);
        vectorInts.push_back(26);
        vectorInts.push_back(27);
*/
//
#include <iostream>
#include <vector>


int main ()
{
  //creating a vector of integers
  std::vector<int> vectorInts;
  //creating an iterator for the vector
  std::vector<int>::iterator it;

  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

  std::cout<<"Adding 23 to the vector\n";
  vectorInts.assign(1,23);
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";


  std::cout<<"\n\nAdding four elements to the vector\n";
  //assigning the value 3 to 4 elements of the vector
  vectorInts.push_back(24);
  vectorInts.push_back(25);
  vectorInts.push_back(26);
  vectorInts.push_back(27);
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

  //printing the contents of vectorInts
  std::cout<<"VectorInts has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  return 0;
}
