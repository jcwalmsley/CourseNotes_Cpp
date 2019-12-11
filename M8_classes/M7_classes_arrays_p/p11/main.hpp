/*
    User defined objects can be used just as any other object is used.

    For example, we can use a user defined object in an array.

    It can be a little tricky, so let's practice using classes by doing one with arrays.

    In this program we are using the Student class from a previous example, to create a course.

    We'll use an array to create the course, and each element of course will be an instance of Student.
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
    void setId(int idin);
    void setGrade(int index, int gradeIn);
    int getId();
    int getGrade(int index);
    int getAvg();
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

void Student::setId(int idin)
{
    id = idin;
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
int  Student::getAvg()
{
    int sum = 0;
    for(int i=0; i<5;i++)
        sum = sum + grade[i];
    return sum/5.0;
}
void Student::printInfo()
{
    cout<<id<<"\n";
    for(int i=0; i<5;i++)
        cout<<grade[i]<<" ";
}
