//practice writing this code
//
class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int gradDateIn);
        string getName();
        int getId();
        int getGradDate();
};
void Student::setName(string nameIn)
{
    name = nameIn;
}

void Student::setId(int idIn)
{
    id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
    gradDate = gradDateIn;
}
//
//defining accessing function members:
//
string Student::getName()
{
    return name;
}
int Student::getId()
{
    return id;
}
int Student::getGradDate()
{
    return gradDate;
}
