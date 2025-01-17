
/*
    Use a constructor to allocate memory for the array. Set a default value to each element in the array.

    Now the compiler can properly allocate memory for the array.

    In a later lesson in the course will we learn about memory allocation and deallocation through the use of the commands "new" and "delete".

    main.cpp
    main.hpp
    solution.cpp
*/
//header file for main.cpp

#include<iostream>

using namespace std;

const int SIZE = 5;
template <class T>
class StudentRecord
{
    private:
        const int size = SIZE;
        T grades[SIZE];
        int studentId;
    public:
        StudentRecord(T defaultInput);//A default constructor with a default value
        void setGrades(T* input);
        void setId(int idIn);
        void printGrades();
};

template<class T>
StudentRecord<T>::StudentRecord(T defaultInput)
{
    //TODO: allocate memory for the array
    //by assigning a default value to each
    //array element.
    for(int i=0; i<SIZE; ++i)
        grades[i] = defaultInput;

}


template<class T>
void StudentRecord<T>::setGrades(T* input)
{
    for(int i=0; i<SIZE; ++i)
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
