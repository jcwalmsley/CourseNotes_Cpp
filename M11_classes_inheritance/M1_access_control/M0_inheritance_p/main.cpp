/*
    Practice inheritance; create a public base class and a derived class. Create a class called Flower. Then create a derived class called Rose. The derived class should have public access to Flower.

    Flower has only one member, a string called bloomtime. Rose has only one member, a string called fragrance.

    main.cpp
    main.hpp
    Goal: practice class inheritance
*/

#include "main_ex.hpp"

int main()
{
    Rose r1;
    r1.setBloomTime("spring");
    r1.setFragrance("strong");

    cout<<"r1 blooms in "<<r1.getBloomTime()<<", "<<r1.getFragrance();
    return 0;
}
