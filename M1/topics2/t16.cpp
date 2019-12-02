/*
    It's often necessary to have an infinite loop for
    a main task in an embeded system.
*/

//-----------------
// Example of an infinite loop made with a for loop:
for( ; ;)
{
     std::cout<<"This for loop will run forever\n";
}

//-----------------
// Example of an infinite loop made with a while loop:
while(1)
{
     std::cout<<"This while loop will run forever\n";
}
