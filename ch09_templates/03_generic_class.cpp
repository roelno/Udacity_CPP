//header file for main.cpp

#include<iostream>

//The class accepts strings, 
//so we need to use namespace
using namespace std;

//tell compiler this class uses a generic value
template <class T>
class StudentRecord
{
    private:
        const int size;
        T grade;
        int studentId;
    public:
        StudentRecord(T input); //note: I used a constructor that accepts the grade input
        void setId(int idIn);
        void printGrades();
};

template<class T>
StudentRecord<T>::StudentRecord(T input) : size(5)
{
    grade=input;
}


//Notice I still add the template<class T here, even though this is not a generic 
//function. It is in a generic class.
//Even though the setId method doesn't use the T type parameter directly in its implementation, it's part of the StudentRecord<T> class, which is a template. 
template<class T>
void StudentRecord<T>::setId(int idIn)
{
    studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
    cout<<"ID# "<<studentId<<": ";
    cout<<grade<<"\n ";
    cout<<"\n";
}


int main()
{
    //StudentRecord is the generic class
    //The constructor sets the grade value
    StudentRecord<int> srInt(3);
    srInt.setId(111111);
    srInt.printGrades();
 
    StudentRecord<char> srChar('B');
    srChar.setId(222222);
    srChar.printGrades();

    StudentRecord<float> srFloat(3.333);
    srFloat.setId(333333);
    srFloat.printGrades();
    
    StudentRecord<string> srString("B-");
    srString.setId(4444);
    srString.printGrades();
    
    return 0;
}