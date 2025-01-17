/*
    C++ has a pointer called 'this'.

    'this' returns its own address.

    There are a few cases where 'this' might be necessary, but often using it is considered a stylistic preference.

    Note in the program below, to compare the Area of the Shape's own area with the area of the shape
*/
//Use 'this' to compare areas
//The class functions
int compareWithThis(Shape shape)
{
    //return the area of the calling shape
    return this->Area() > shape.Area();
}

//Using the class function in a program
//In this case sh1.Area() is being compared to sh2.Area()

if(sh1.compareWithThis(sh2))
{
    cout << "\nShape2 is smaller than Shape1" <<endl;
}
// I can perform the exact same function and not use 'this'.

//'this' is not necessary to compare shapes
int compare(Shape shapeIn)
{
    return Area() > shapeIn.Area();
}
// To use the class function:

if(sh1.compare(sh2))
{
    cout << "\nShape2 is smaller than Shape1" <<endl;
}
//
//Again, the function compares sh1.area() to the area of sh2.area().
//
#include <iostream>

using namespace std;

class Shape {
    public:
    // Constructor definition
        Shape(int l = 2, int w = 2)
        {
            length = l;
            width = w;
        }

        double Area()
        {
            return length * width;
        }

	    //Use 'this' to compare areas
        int compareWithThis(Shape shape)
        {
            return this->Area() > shape.Area();
        }
        //'this' is not necessary to compare shapes
        int compare(Shape shapeIn)
        {
            return Area() > shapeIn.Area();
        }

    private:
        int length;     // Length of a box
        int width;
};

int main(void)
{
    Shape sh1(4, 4);    // Declare shape1
    Shape sh2(2, 6);    // Declare shape2

    if(sh1.compare(sh2))
    {
        cout << "\nShape2 is smaller than Shape1" <<endl;
    }
    else
    {
        cout << "\nShape2 is equal to or larger than Shape1" <<endl;
    }

    if(sh1.compareWithThis(sh2)) {
        cout << "\nShape2 is smaller than Shape1" <<endl;
    }
    else
    {
        cout << "Shape2 is equal to or larger than Shape1" <<endl;
    }

    return 0;
}
  
