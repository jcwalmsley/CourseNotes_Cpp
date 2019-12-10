//
studentVariableName.getGradDate();
//
#include <iostream>
using namespace std;

class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int gradDateIn);
        string getName();
        int getId();
        int getGradDate();
        void print();
    };
    void Student::setName(string nameIn)
    {
        name = nameIn;
    }

    void Student::setId(int idIn)
    {
        id = idIn;
    }

    void Student::setGradDate(int gradDate)
    {
        gradDate = gradDateIn;
    }

    void Student::print()
    {
        cout<<name" "<<id<<" "<<gradDate;
    }

    string Student::getName()
    {
        return name;
    }

    int Student::getGradDate()
    {
        return gradDate;
    }

    int main()
    {
        int integer1;
        float float1;
        Student student1;

        integer1 = 4;
        float1 = 4.333;

        student1.setName("Catherine Gamboa");
        student1.setId(54345);
        student1.setGradDate(2017);

        //print variable values
        cout<<integer1;
        cout<<float1;

        //there are 2 options for printing the class values
        //first method is to call the print function that was created
        cout<<"Using the Student::print function\n";
        cout<<"Student1 = ";
        student1.print();
        cout<<"\n\n";

        //the second method for printing the values of the class is
        //accessing each class member with the get functions
        cout<<"Using the student accsess functions\n";
        cout<<"Student1 name = "<<student1.getName()<<"\n";
        cout<<"Student1 ID = "<<student1.getID()<<"\n";
        cout<<"Student1 Grad Date = "<<student1.getGradDate()<<"\n";

        return 0;

    }
