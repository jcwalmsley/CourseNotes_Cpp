/*
    Another method for adding elements is ::emplace.

    Emplace puts an element in a vector at the position pointed to by the iterator.

    Emplace differs from insert in the method used to insert the element.
    Insert copies the values of the vector while emplace does an in-place insertion.
    This means the insertion occurs at the point after the iterator.

    The difference makes emplace more efficient than insert in special cases.

    You can find more about emplace here

    In the program below, we see the code:

      //insert an element after the first element
      it  = vectorInts.begin() + 1;
      vectorInts.emplace(it, -1);

    To use emplace we must first set the iterator to the desired location.
    In this case, after the first element.

      it  = vectorInts.begin() + 1;

    Then we use emplace to add the element.

    vectorInts.emplace(it, -1);
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

  //insert an element after the first element
  it  = vectorInts.begin() + 1;
  vectorInts.emplace(it, -1);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  //insert an element after the third element
  it  = vectorInts.begin();
  vectorInts.emplace(it + 3, -2);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  //insert an element after the third element
  it  = vectorInts.begin();
  vectorInts.emplace(it + 5, -3);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  return 0;
}
