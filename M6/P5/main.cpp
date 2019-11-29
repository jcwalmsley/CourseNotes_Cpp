/*
    MULTIDEMSIONAL ARRAY EXERCISE:

    In this exercise, initialize a 4x4 array and a one dimensional
    array of four elements (also known as a vector).

    Instructions:
    Write a program that will accept values for a 4x4 array and
    a vector of size 4.

    Using dot product, multiply the array by the vector.

    Print the resulting 4 element vector of the dot product.
*/

#include <iostream>
#include <stdio.h>

int main()
{
    // set dimensions of rows and columns
    const int row = 4;
    const int col = 4;

    // set sizes for the array, vector, product and datatype for sum
    int arr[row][col];
    int vector[row], product[row];
    int sum;

    // enter user's input of array from input.txt file
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<row; j++)
        {
            std::cout<<"arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<"\n";
            std::cin>>arr[i][j];
            std::cout<<"arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<"\n";
        }
    }

    // enter user's input of vector from input.txt file
    for(int i=0; i<row; i++)
    {
        std::cout<<"vector["<<i<<"] = \n";
        std::cin>>vector[i];
        std::cout<<"vector["<<i<<"] = "<<vector[i]<<"\n";
    }
    sum=0;

    // find dot product of array & vector + sum
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<row; j++)
        {
            sum = (arr[i][j] * vector[i]) + sum;
        }
        product[i] = sum;
        sum=0;
    }

    // print dot product vector "product[i]"
    for(int i=0; i<row; i++)
    {
        std::cout<<"product["<<i<<"] = "<<product[i]<<"\n";
    }
    return 0;
}

//-----------------
/*
#include <iostream>

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4.

    // provide the dimensions of the rows and columns
    const int row = 4;
    const int col = 4;

    int array1D [row][col];
    int vector [row], dotProduct[row];
    int sum;


    // enter user's input for the 4x4 dimensional array
    for(int i=0; i<row; i++)
        for(int j=0; j<col; i++)
        {
           std::cout<<"array4D["<<i<<"]["<<j<<"] = \n";
           std::cin>>array4D[i][j];
           //std::cout<<"array4D["<<i<<"]["<<j<<"] = "<<array4D[i][j]<<\n";
        }


    // enter user's input for array1D / vector of 4 elements
    for(int i=0; i<row; i++)
        {
            std::cout<<"array1D["<<i<<"] = \n"
            std::cin>>array1D[i];
            //std::cout>>"array1D["<<i<<"] = "<<array1D[i]<<"\n";
        }
    sum = 0;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum = (array1D[i] * array4D[i][j]) + sum;
        }
        dotProduct[i] = sum;
        sum = 0;
    }

    //Print the dot product of array & arrat4Dim
    for(int i=0; i<row; i++)
    {
        std::cout<<"dotProduct["<<i<<"] = "<<dotProduct[i]<<"\n";
    }
    return 0;
}
*/
