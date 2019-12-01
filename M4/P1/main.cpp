/*
    Practice using if else statements:
    Ask user for two inputs:

    1) Do you want a pet with fur(f), featers(t), or scales(s)?
        Confirm user's choice, print out:

            "You want a pet with ("skin").

    2) Do you want the pet to live in water(w), on land(l), or both(b)?
        Confirm user's choice, print out:

            "You want a pet that live on land and water"

    3) Finally, print out:

            "Get a "animal".

*/

/*
    Using "if else" conditional..statements in C++
    write a program that prompts users with two
    questions that will result in the selection
    / reccomendation of a type pet"
*/
//
#include<iostream>

int main()
{
   char skin, location;
   char f,t,s,w,l,b;
   char dog, bird, fish, gecko, frog;

   std::cout<<"Would you like an animal with fur(f), feathers(t), or scales(s) ?";
   std::cin>>skin;
   std::cout<<"You want an animal with "<<skin<< endl;

   //Use if-else statements to control program flow

   if(skin == 'f')
    {
        std::cout<<"Get a dog "<<dog<< endl;
    }
    else if (skin == 't')
    {
        std::cout<<"Get a bird "<<bird<< endl;
    }
    else if (skin == 's')
    {
        std::cout<<"Would you like an animal that lives in water(w), land(l), or both(b) ?";
        std::cin>>location;
        std::cout<<"You want an animal that lives on: "<<location<<"\n";
    }

   //Use if-else statements to control program flow

   if(location == 'w')
   {
   std::cout<<"Get a fish "<<fish<< endl;
   }
   else if(location == 'l')
   {
   std::cout<<"Get a gecko "<<gecko<< endl;
   }
   else if(location == 'b')
   {
   std::cout<<"Get a frog "<<frog<< endl;
   }
   return 0;
}
