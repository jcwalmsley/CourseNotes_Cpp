#include <iostream>
#include <string>
using namespace std;

class Flower
{
    private:
        string bloomTime;
    public:
        void setBloomTime(string bloomIn);
        string getBloomTime();
}
Flower::Flower()
{
    //TODO: Complete the constructor
}

void Flower::setBloomTime(string bloomIn)
{
    //TODO: Complete the function
}

string Flower::getBloomTime()
{
    //TODO: Complete the function
}

//TODO: Complete the class called Rose
//It is derived from the class Flower
class Rose
{
    private:
        string fragrance;
    public:
        Rose();
        void setFragrance(string fragIn);
        string getFragrance();
}

Rose::Rose()
{
    //TODO: complete the constructor
}

void Rose::setFragrance(string fragIn)
{
    //TODO: Complete the function
}

void Rose::getFragrance()
{
    //TODO: Complete the function
}
