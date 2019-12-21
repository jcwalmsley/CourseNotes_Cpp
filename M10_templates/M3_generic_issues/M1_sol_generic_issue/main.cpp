/*
    Use a constructor to allocate memory for the array. Set a default value to each element in the array.

    Now the compiler can properly allocate memory for the array.

    In a later lesson in the course will we learn about memory allocation and deallocation through the use of the commands "new" and "delete".

    main.cpp
    main.hpp
    solution.cpp

    Goal: study generic classes fix the program by completing the constructor.
    It should assign a default value to each element in the array.
*/

#include "main.hpp"

int main()
{
    //StudentRecord is the generic class
    //The constructor sets the grade value
    StudentRecord<int> srInt();//add a default value using a constructor
    srInt.setId(123456);
    int arrayInt[SIZE]={1,2,3,4};
    srInt.setGrades(arrayInt);
    srInt.printGrades();

    StudentRecord<char> srChar();//add a default value using a constructor
    srChar.setId(234567);
    char arrayChar[SIZE]={'F','F','F','F','E'};
    srChar.setGrades(arrayChar);
    srChar.printGrades();

    StudentRecord<float> srFloat();//add a default value using a constructor
    srFloat.setId(345678);
    float arrayFloat[SIZE]={2.75,4.0,3.7,2.8,3.99};
    srFloat.setGrades(arrayFloat);
    srFloat.printGrades();

    StudentRecord<string> srString();//add a default value using a constructor
    srString.setId(456789);
    string arrayString[SIZE]={"B","B-","C+","B","A"};
    srString.setGrades(arrayString);
    srString.printGrades();

    return 0;
}
