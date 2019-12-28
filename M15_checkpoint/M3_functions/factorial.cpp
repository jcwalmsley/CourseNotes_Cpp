#include "Factorial.h"

// Your code goes here!
// See Factorial.h for your method's signature (eg, its args and return value).
int Factorial(int n){
    int result = 1;

    for(int i = n; i > 0; --i){
        result *= i;
    }
    return result;
}
