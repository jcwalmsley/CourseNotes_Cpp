// Example 2: using namespace std;

/*Use the "namespace" keyword to simplify typing by "using
    namespace std;" its possible to use this just before the
    beginning of the main program to avoid having to repeatedly
    type "std::..."" over and over note: using this can
    potentialy result in library linking conflicts in larger
    programs

*/
//
#include <iostream>
using namespace std;
int main()
{
    cout << "Hey, writing std:: is pain, ";
    cout << "change the program so I don't have to write it.";
    return 0;
}
//
