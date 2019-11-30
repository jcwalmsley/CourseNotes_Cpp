/*
    Switch statements transfer control to one of several
    statements, depending on the value of a condition.

    Possible formats for a switch statement shown below:
*/
//-----------------
/* Example 1:
switch(1) {
case 1 : cout << '1'; // prints "1",
case 2 : cout << '2'; // then prints "2"
}
// Example 2:
switch(1) {
case 1 : cout << '1'; // prints "1"
         break;       // and exits the switch
case 2 : cout << '2';
         break;
}

//-----------------
// Example 2 of switch expressions:
switch(expression)
{
     case constant-expression : statements;
                               break; (this is optional);
     case constant-expression : statements;
                               break; (this is optional);
     ...

     default : //optional
        statements;
}
*/
/*
    Practice using switch statements
.*/

#include <iostream>

int main()
{
    int menuItem = 1;

    std::cout<<"What is your favorite winter sport?: \n";
    std::cout<<"1.Skiing\n2: Sledding\n3: Sitting by the fire";
    std::cout<<"\n4.Drinking hot chocolate\n";
    std::cout<<"\n\n";

    switch(menuItem)
    {
        case(1): std::cout<<"Skiing?! Sounds dangerous!\n";
                 break;
        case(2): std::cout<<"Sledding?! Sounds like work!\n";
                 break;
        case(3): std::cout<<"Sitting by the fire?! Sounds warm!\n";
                 break;
        case(4): std::cout<<"Hot chocolate?! Yum!\n";
                 break;
        default: std::cout<<"Enter a valid menu item";
    }
    return 0;
}
//-----------------
/* Output =

    What is your favorite winter sport?:
    1. Skiing
    2: Sledding
    3: Sitting by the fire
    4. Drinking hot chocolate

    Skiing?! Sounds dangerous!

*/
