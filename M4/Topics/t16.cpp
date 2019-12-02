/*
    Sometimes it is desired to create an infinite loop.
    For example, in embedded systems a infinite loop is
    often used for the main task.
*/

//-----------------
//Creating an infinite loop with a for loop:
for( ; ;)
{
     std::cout<<"This for loop will run forever\n";
}

//-----------------
//Creating an infinite loop with a while loop:
while(1)
{
     std::cout<<"This while loop will run forever\n";
}
