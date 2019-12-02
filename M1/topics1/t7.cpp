// First Example 7a: simple width formating of output
//
#include <iomamip>
std::cout<<"Ints",,std::setw(10)<<"Floats"<<setw(10)<<"Doubles"<<"\n";
//
// Second Example: regular formating of output
//
#include <iomamip>
std::cout<<"\n\nThe text without any formatiting\n";
std::cout<<"Ints"<<"Floats"<<"Doubles"<<"\n";
std::cout<<"The text with setw(15)\n";
std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)\
    <<std::setw(15)<<"Doubles"<<"\n";
std::cout<<"\n\nThe text with tabs\n";
std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<<"\n";

// Showing output of formatting above
/*
The text without any formating
IntsFloatsDoubles

The text with setw(15)
Ints         Floats        Doubles


The text with tabs
Ints    Floats    Doubles
*/

// Third Example 7b: more extensive formatting example
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    cout<<"print with set width = 10\n";
    cout<<"Ints"<<std::setw(10);
    cout<<"Floats"<<std::setw(10);
    cout<<"Doubles"<<std::setw(10)<<"\n";
    cout<< a;
    cout<< setw(12)<< b;
    cout<< setw(10)<< c << "\n";
    cout<< aa;
    cout<< setw(12)<< bb;
    cout<< setw(10)<< cc << "\n";
    cout<< aaa;
    cout<< setw(12)<< bbb;
    cout<< setw(10)<< ccc << "\n";
    return 0;
}
//
// Output
/*
print with set width = 10
Ints    Floats   Doubles
45      45.323   45.5468
54      54.323   54.5468
63      63.323   63.5468
*/
