/*
    Practice using if else statements:
    Ask for two user inputs
    1) Do you want a pet with fur(f), featers(t), or scales(s)? Confirm choice, You want a pet with (user's choice). 2) Do you want the pet to live in water(w), on land(l), or both(b)?

*/

/*
    Using if-else statements in C++
    Write a program prompting user with two
    questions that will result in the selection
    of a pet"
*/
//
#include<iostream>

int main()
{
   char skin, location;
   char f,t,s,w,l,b;
   char dog, bird, fish, gecko, frog;

   std::cout<<"Would you like an animal with fur(f), feathers(t), or scales(s)?";
   std::cin>>skin;
   std::cout<<skin<<"\n";

   //Use if-else statements to control program flow

   if(skin == 'f')
    {
        std::cout<<"Get a dog"<<dog<<"\n";
    }
    else if (skin == 't')
    {
        std::cout<<"Get a bird"<<bird<<"\n";
    }
    else if (skin == 's')
    {
        std::cout<<"Would you like an animal that lives in water(w), land(l), or both(b)?";
        std::cin>>location;
        std::cout<<location<<"\n";
    }

   //Use if-else statements to control program flow

   if(location == 'w')
   {
   std::cout<<"Get a fish"<<fish<<"\n";
   }
   else if(location == 'l')
   {
   std::cout<<"Get a gecko"<<gecko<<"\n";
   }
   else if(location == 'b')
   {
   std::cout<<"Get a frog"<<frog<<"\n";
   }
   return 0;
}
