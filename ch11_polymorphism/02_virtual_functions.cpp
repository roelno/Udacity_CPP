/* header file for main.cpp
*/ 

#include<iostream>
#include<string>
using namespace std;

//Employee is a class for calculating the
//pay for an hourly employee. 
class Employee
{
    private:
        float payRate;
        string name;
        int employeeNumber;
    public:
        void setPayRate(float rateIn);
        float getPayRate();
        //This is now a virtual function
        virtual float calcWeeklyPay(); 
};
void Employee::setPayRate(float rateIn)
{
    payRate = rateIn;
}
float Employee::getPayRate()
{
    return payRate;
}
float Employee::calcWeeklyPay()
{
    return 40 * payRate;
}

//The class manager inherits from Employee
//The only difference... managers are salary
//employees. So the pay is calculated differently.
class Manager : public Employee
{
    public:
        float calcWeeklyPay();
};

float Manager::calcWeeklyPay()
{
    //weekly pay is based on the yearly salary
    //divided by 52 weeks
    return Employee::getPayRate() /52;
}


int main()
{
    const string status = "salary"; //options: hourly or salary
    string level;
    level = "salary";
    Employee *e1; //e1 is now a pointer to Employee object
    
    if(status != level)
    {
        e1 = new Employee(); //we define an hourly employee
    }
    else
    {
        e1 = new Manager(); //we define a salaried employee
    }  
    
    e1->setPayRate(12000.00);
    cout<<"It works!\n";
    cout<<"e1 pay: $"<<e1->calcWeeklyPay();
    delete e1;
    return 0;
}