/*
    Even though it's not possible to pass arrays to functions,
    arrays can be passed by reference to a function.

    3 methods of passing arrays to functions:
    void functionName(variableType *arrayName) //as a reference
    void functionName(variableType arrayName[length of array]) //as a sized array
    void functionName(variableType arrayName[]) //as an unsized array
*/
//
/*
    Examples, 3 methods of passing arrays to functions.
*/

#include<iostream>
#include<iomanip>

//As a pointer
void arrayAsPointer(int *arrayName, int size);

//As a sized array
void arraySized(int arrayName[5], int size);

//As an unsized array
void arrayUnSized(int arrayName[], int size);

int main()
{
    const int size = 6;
    int arrayName[size] = {11,22,55,44,66,77};
        /*
            When passing arrays by reference to functions,
            the array's size isn't always known therefore,
            pass the array size also.
        */
    arrayAsPointer(arrayName, size);
    arraySized(arrayName, size);
    arrayUnSized(arrayName, size);
    return 0;
}

void arrayAsPointer(int *arrayName, int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++)
        std::cout<<*arrayName[i]<<" ";
    std::cout<<"\n";
}

void arraySized(int arraySized[6], int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++)
        std::cout<<arraySized[i]<<" ";
    std::cout<<"\n";
}

void arrayUnSized(int arrayUnSized[], int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++)
        std::cout<<arrayUnsized[i]<<" ";
    std::cout<<"\n";
}
