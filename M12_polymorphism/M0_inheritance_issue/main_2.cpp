/*
    Well, that worked, but we now we have to maintain a different branch for each employee type.

    Let's try something else.

    If we define a pointer of type Employee, we can reduce the amount of redundant code.

    The question is ... does it work?

    main.cpp
    main.hpp

    We created a pointer to an employee object.
    Now we only have to define which type of employee.
    Then we can use the same code for all employees.
    The question is .... does it work?
*/
#include "main_2.hpp"

int main()
{
    const string status = "salary"; //options: hourly or salary
    string level;
    level = "hourly";
    Employee *e1; //e1 is now a pointer to Employee object

    if(status != level)
    {
        e1 = new Employee(); //we define an hourly employee
    }
    else
    {
        e1 = new Manager(); //we define a salaried employee
    }

    e1->setPayRate(12000.00);
    cout<<"This doesn't work. We get the wrong pay.\n";
    cout<<"e1 pay: $"<<e1->calcWeeklyPay();
    cout<<"\nThe pay is calculated as an hourly employee.";
    delete e1; //every 'new' must have a delete
    return 0;
}
