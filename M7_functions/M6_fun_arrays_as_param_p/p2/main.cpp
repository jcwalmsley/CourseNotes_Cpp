/*
    Wite a program that searches an array for a given value,
    returns the index of the value if in the array, otherwise
    return -1.
*/

#include<iostream>

int search(int array[], int size, int searchKey);

int main()
{
    const int size = 10;
    int array[] = {7,413298,9,6376,73,3976,53,357,832,6483};
    int searchKey = 3976;
    std::cout<<"Found at index = "<<search(array, size, searchKey);
    return 0;
}

int search(int array[], int size, int searchKey)
{
    int found = -1;
    for(int i=0; i<size; i++)
    {
        if(array[i] == searchKey)
        {
            found = i;
        }
    }
    return found;
}
