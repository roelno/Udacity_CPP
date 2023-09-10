#include <iostream>
#include <string>
using namespace std;


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
        
// The double colons :: 
// in C++ are used to indicate the scope resolution operator.
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
    
};

/* In C++, unlike in Java, the use of this-> is not required 
when accessing class members within member functions. You can
directly access class members without this->. */