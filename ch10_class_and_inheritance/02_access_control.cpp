//The derived class with Student as base class
#include<iostream>
#include<string>
using namespace std;

//The base class
class Student
{
    private:
        int id;
    public:
        void setId(int idIn);
        int getId();
        Student();
};

Student::Student()
{
    id = 000000000;
}

void Student::setId(int idIn)
{
    id = idIn;
}

int Student::getId()
{
    return id;
}

//The derived class with Student as base class: public access
// class GradStudent2 : public Student
// {
//     private:
//         string degree;
//     public:
//         GradStudent2();
//         void setDegree(string degreeIn);
//         string getDegree();
// };


//The derived class with Student as base class: private access
class GradStudent3 : private Student
{
    private:
        string degree;
    public:
        GradStudent3();
        void setDegree(string degreeIn);
        string getDegree();
        void setStudentId(int idIn); //need this to access Student::setId()
        int getStudentId(); //need this to access Student::getId()
};

GradStudent3::GradStudent3()
{
    degree = "undelcared";
}

string GradStudent3::getDegree()
{
    return degree;
}

int GradStudent3::getStudentId()
{
    //We must access getId() as a private function
    return Student::getId(); 
}
void GradStudent3::setStudentId(int idIn)
{
    //We must access setId() as a private function
    Student::setId(idIn); 
}



int main()
{
    //Create an instance of the derived class, 
    //GradStudent
    GradStudent3 gs1;
    
    //Set the id of the grad student
    //using the function in the base class
    gs1.setStudentId(123456789);
    
    //Set the degree of the grad student
    //using the function in the derived class
    gs1.setDegree("BSEE");
    
    cout<<gs1.getStudentId()<<" "<<gs1.getDegree();
    return 0;
}