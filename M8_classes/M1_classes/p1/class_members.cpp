/*
    Create a function that can modify values witin the student class created
    before.

    Standard method for inputing data items is to use setDataName to change data inside a class.

    Include the these 3 items of data:
        name
        id
        gradDate
*/
//
void setName(std::string nameIn)
//
/*
    Add a function that can input each item type of data.
*/
//
class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
};
//
/*
    In order to return the data we'll need another function that can access and return
    it as output.

    To retrieve data items from within a class we a get function with the form
    getDataValue

    Get functions return data, therefore they have the variable type as a return value.

    In order to access name, the function declaration is:
    string getName();

    Student class with a function for each data member shown below:
*/
//
class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        string getName();
        int getId();
        int getGradDate();
        void print();
};
