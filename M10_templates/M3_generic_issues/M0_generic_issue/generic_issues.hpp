/*
    There is an issue with generic classes that I would like to talk about. It has to do with arrays.

    Recall, compilers need to know what variable type and how many elements are required for an array at compile time. The information is necessary to allocate memory for the array.

    The program below will not compile without errors. As you will see, we get an odd error associated with the variables in the class.

    main.cpp
    main.hpp
*/
//header file for main.cpp

#include<iostream>

using namespace std;
const int SIZE=5;

template <class T>
class StudentRecord
{
    private:
        const int size = SIZE;
        T grades[5];
        int studentId;
    public:
        void setGrades(T* input);
        void setId(int idIn);
        void printGrades();
};

template<class T>
void StudentRecord<T>::setGrades(T* input)
{
    for(int i=0; i<SIZE;++i)
    {
        grades[i] = input[i];
    }
}

template<class T>
void StudentRecord<T>::setId(int idIn)
{
    studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
    std::cout<<"ID# "<<studentId<<": ";
    for(int i=0;i<SIZE;++i)
        std::cout<<grades[i]<<"\n ";
    std::cout<<"\n";
}
