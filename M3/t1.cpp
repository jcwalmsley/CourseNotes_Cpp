// Example 1; using artimetic & cmath stanadard library
//
#include<iostream>
#include<cmath>

int main()
{
    float volCube, volSphere, volCone = 0;

    //Dimension of the cube
    float cubeSide = 5.4;
    volCube = pow(cubeSide,3.0);
    std::cout << "The cube volume is " <<volCube<<"\n";

    //Dimension of sphere
    float sphereRadius = 2.33;
    volSphere = (4.0/3.0) *  M_PI * std::pow(sphereRadius,3.0);
    std::cout << "The sphere volume is " <<volSphere<<"\n";

    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14.0;
    volCone = M_PI * coneRadius * coneRadius * (coneHeight/3.0);
    std::cout << "The cone volume is " <<volCone<<"\n";

    return 0;
}
// Output
/*
    The cube volume is 157.464
    The sphere volume is 52.9854
    The cone volume is 857.985
*/
