/*
    insert is another method to add elements to a vector.
    insert adds elements to the location after the iterator.

    To add elements using insert:

        Set the iterator to one before the location where you would like to add an element.
        Use insert to add the element.

    This sounds complicated, let's look at an example and you'll see it is fairly straight forward.

    In the program below, note the following:

    Before we insert, we need to set the iterator to a known destination.
    In this case we set it to the beginning of the vector plus one.

        it  = vectorInts.begin() + 1;

    To insert the element we need to give the insert location and the value of the element.
    In this case the location is the location of the iterator (begin + 1).

        The value is -1.
        vectorInts.insert(it, -1);

    Also note in the program below, I reset the iterator to the beginning of the vector before inserting the next value.
    You need to do this after an insert because all iterator locations are invalid after an insert.
    In this program I set the iterator to the beginning of the vector.

    Then during the insert I moved the iterator 3 locations to add the next element, which has a value of -2.

      it  = vectorInts.begin();
      vectorInts.insert(it + 3, -2);
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
  vectorInts.insert(it, -1);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  //insert an element after the third element
  it  = vectorInts.begin();
  vectorInts.insert(it + 3, -2);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  //insert an element after the third element
  it  = vectorInts.begin();
  vectorInts.insert(it + 5, -3);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  return 0;
}
