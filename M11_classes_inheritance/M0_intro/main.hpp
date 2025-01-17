/*
    In C++ we can derive a class from another class, called a base. The derived class can access members and functions of the base class.

    We say the derived class has inherited from the base class.

    In the image below we see a graphical representation of class inheritance. The base class is at the top of the tree and the derived class is below it.
*/

/*The header file for inheritance.*/

#include<iostream>
#include<string>
using namespace std;

//The base class
class Student
{
    private:
        int id;
    public:
        void setId(int idIn);
        int getId();
        Student();
};

Student::Student()
{
    id = 000000000;
}

void Student::setId(int idIn)
{
    id = idIn;
}

int Student::getId()
{
    return id;
}

//The derived class with Student as base class
class GradStudent : public Student
{
    private:
        string degree;
    public:
        GradStudent();
        void setDegree(string degreeIn);
        string getDegree();
};

GradStudent::GradStudent()
{
    degree = "undelcared";
}
void GradStudent::setDegree(string degreeIn)
{
    degree = degreeIn;
}
string GradStudent::getDegree()
{
    return degree;
}
