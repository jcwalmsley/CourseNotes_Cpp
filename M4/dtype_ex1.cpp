/*
    Incorrect variable type exercise:
*/
// Information given:
/*
#include <iostream>

int main()
{
     float width = 4.5;
     float height = 5.5;

     int area = width * height;
     std::cout << "area = " << area;
     return 0;
}
*/
#include <iostream>

int main()
{
     float width = 4.5;
     float height = 5.5;

     int area = width * height; // this datatype should have been float
     std::cout << "area = " << area;
     return 0;
}
// Output
/*
24 // example of incorrectly written math program where output datatype should be float not int
*/
