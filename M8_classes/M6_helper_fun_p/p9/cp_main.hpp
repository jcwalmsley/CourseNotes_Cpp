/*
    Classes can have member functions that do more than just set or get data values.

    These helper functions can perform tasks that are often requested or are easier
    to perform in the class itself.

    For example:
    Let's say we have a class that tracks the grades a student receives in a course.
    We can create a member function that calculates the average.

    main.cpp
    main.hpp
*/
//
#include<iostream>
using namespace std;

class Student
{
    int grade[5];
    int id;
public:
    Student();
    void setId(int idIn);
    void setGrade(int index, int gradeIn);
    int getId();
    int getGrade(int index);
    float getAvg();
    void printInfo();
};

Student::Student()
{
    for(int i=0;i<5;i++)
    {
        grade[i] = 0;
    }
    id = 0;
}

void Student::setId(int idIn)
{
    id = idIn;
}
void Student::setGrade(int index, int gradeIn)
{
    grade[index] = gradeIn;
}
int  Student::getId()
{
    return id;
}
int  Student::getGrade(int index)
{
    return grade[index];
}
float  Student::getAvg()
{
    int sum = 0;
    for(int i=0;i<5;i++)
        sum = sum + grade[i];
    return sum/5.0;
}
void Student::printInfo()
{
    cout<<id<<"\n";
    for(int i=0;i<5;i++)
        cout<<grade[i]<<" ";
}
