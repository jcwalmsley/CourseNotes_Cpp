//----
To understand polymorphism, we need to take a deeper look at Inheritance.

Let's begin with an example of inheritance that will highlight the need for polymorphism.

In the program below we have two classes; Employee and Manager.

A manager is an employee, so we can use inheritance to derive the Manager class from the Employee class. The difference between the two classes lies in the payRate. Employees are paid an hourly wage, managers are paid a salary.

The weekly pay for an employee is calculated as:

       pay = PayRate * HoursWorked
For the manager weekly pay is calculated as:

       pay = Salary / 52
main.cpp
main.hpp
/* header file for main.cpp
*/

#include<iostream>
#include<string>
using namespace std;

//Employee is a class for calculating the
//pay for an hourly employee.
class Employee
{
    private:
        float payRate;
        string name;
        int employeeNumber;
    public:
        void setPayRate(float rateIn);
        float getPayRate();
        float calcWeeklyPay();
};
void Employee::setPayRate(float rateIn)
{
    payRate = rateIn;
}
float Employee::getPayRate()
{
    return payRate;
}
float Employee::calcWeeklyPay()
{
    return 40 * payRate;
}

//The class manager inherits from Employee
//The only difference... managers are salary
//employees. So the pay is calculated differently.
class Manager : public Employee
{
    public:
        float calcWeeklyPay();
};

float Manager::calcWeeklyPay()
{
    //weekly pay is based on the yearly salary
    //divided by 52 weeks
    return Employee::getPayRate() /52;
}
