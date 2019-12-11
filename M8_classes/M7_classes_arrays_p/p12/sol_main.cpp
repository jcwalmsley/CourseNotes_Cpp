
#include "main.hpp"


int main()
{
    const int SIZE=3;
    Dog roster[SIZE];

    roster[0].setName("Blue");
    roster[1].setName("King");
    roster[2].setName("Spot");
    roster[0].setLicenseNumber("657836");
    roster[1].setlicenseNumber("432189");
    roster[2].setLicenseNumber("839621");


    printRoster(roster,SIZE);
    return 0;
}
