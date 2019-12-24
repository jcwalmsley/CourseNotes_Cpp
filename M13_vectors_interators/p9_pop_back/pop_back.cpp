/*
    We can remove the last element of a vector using ::pop_back.

        For example:

          //pop the last element off the vector
          vectorInts.pop_back();

    pop_back DOES NOT return a value!

    For example, the code shown below will generate an error message and will not compile.

          int a;
          a = vectorInts.pop_back(); //this line does not compile

    You will get an error message telling you ::pop_back has a void value for a return.

    main.cpp: In function ‘int main()’:
    main.cpp:39:5: error: void value not ignored as it ought to be
       a = vectorInts.pop_back();
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

  vectorInts.push_back(0);
  vectorInts.push_back(1);
  vectorInts.push_back(2);
  vectorInts.push_back(3);
  vectorInts.push_back(4);
  vectorInts.push_back(5);
  vectorInts.push_back(6);
  vectorInts.push_back(7);

  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

  //printing the contents of vectorInts
  std::cout<<"VectorInts has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  //pop the last element off the vector
  vectorInts.pop_back();
  std::cout<<"\n\nAfter pop_back(), the vector has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  //pop_back does not return the element that was removed.
  //For example, the line of code below will return an error.
  int a;
  //a = vectorInts.pop_back(); //this line does not compile
  return 0;
}
