/*
    In this program create a class called Cats.

    It has three private members: name, breed, age.

    Create set and get and printInfo functions:
        private members:
            name, breed, age
        public members:
            setName, setBreed,setAge
            getName, getBreed, getAge,
            printInfo.

    main.cpp
    main.hpp
*/
//-----------------
#include "main.hpp"
using namespace std;

int main()
{
    Cat cat1, cat2;
    cat1.setName("Kimmy");
    cat2.setName("Bobby");
    cat1.setBreed("calico");
    cat2.setBreed("main coon");
    cat1.setAge(4);
    cat2.setAge(1);

    cat1.printInfo(0);
    cout<<"\n";
    cat2.printInfo();
    cout<<"\n\n";
    //alternate way to retun values
    cout<<cat1.getName()<<" "<<cat1.getBreed()<<" "<<cat1.getAge()<<"\n";
    cout<<cat2.getName()<<" "<<cat2.getBreed()<<" "<<cat2.getAge()<<"\n";
    return 0;
}

//-----------------
// A sample main.cpp program
/*
#include"main.hpp"

int main()
{
    Cat cat1,cat2;
    cat1.setName("Kimmy");
    cat2.setName("Bobby");
    cat1.setBreed("calico");
    cat2.setBreed("main coon");
    cat1.setAge(4);
    cat2.setAge(1);

    cat1.printInfo();
    cout<<"\n";
    cat2.printInfo();
    cout<<"\n\n";
    //Alternate printing method
    cout<<cat1.getName()<<" "<<cat1.getBreed()<<" "<<cat1.getAge()<<"\n";
    cout<<cat2.getName()<<" "<<cat2.getBreed()<<" "<<cat2.getAge();
    return 0;
}
  */
