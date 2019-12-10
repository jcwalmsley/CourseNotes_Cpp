/*
    User defined objects can be used just as any other object is used.

    For example, we can use a user defined object in an array.

    It can be a little tricky, so let's practice using classes by doing one with arrays.

    In this program we are using the Student class from a previous example, to create a course.

    We'll use an array to create the course, and each element of course will be an instance of Student.
*/
//
#include "main.hpp"

int main()
{
    const int SIZE= 3;
    //Create a course of students
    Student course1[SIZE];
    //Each array element is a Student type
    //so it has access to the members of Student
    course1[0].setId(1000);
    course1[1].setId(1111);
    course1[2].setId(2222);

    course1[0].setGrade(0,83);
    course1[1].setGrade(0,95);
    course1[2].setGrade(0,72);

    course1[0].setGrade(1,87);
    course1[1].setGrade(1,52);
    course1[2].setGrade(1,70);

    course1[0].setGrade(2,90);
    course1[1].setGrade(2,85);
    course1[2].setGrade(2,82);

    for(int i=0;i<SIZE;i++)
    {
        course1[i].printInfo();
        cout<<"\n\n";
    }


    return 0;
}
  
