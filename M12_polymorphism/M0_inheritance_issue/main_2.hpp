/*
    header file for main.cpp

    This doesn't work. We get the wrong pay.
    e1 pay: $480000
    The pay is calculated as an hourly employee.
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
