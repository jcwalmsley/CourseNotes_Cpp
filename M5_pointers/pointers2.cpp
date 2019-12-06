/*
    More on pointers:
*/

#include<iostream>
#include<string>

int main ()
{
  int * pointerI;
  int number;
  char character;
  char * pointerC;
  std::string sentence;
  std::string *pointerS;

  pointerI = &number;
  *pointerI = 13;

  pointerC = &character;
  *pointerC = 'f';

  pointerS = &sentence;
  *pointerS = "Pointers are fun to work with.";

  std::cout << "number = "<<number<<"\n";
  std::cout<<"character = "<<character<<"\n";
  std::cout<<"sentence = "<<sentence<<"\n";

  return 0;
}
//
// Output
/*
number = 13
character = f
sentence = Pointers are fun to work with.
*/
