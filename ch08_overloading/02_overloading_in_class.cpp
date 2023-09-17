#include<iostream>

class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);
};

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

int main()
{
    Compare c;
    int a = 5; 
    int b = 4;
    float f1 = 5.43;
    float f2 = 6.32;
    char c1 = 'c';
    char c2 = 'z';
    std::cout<<c.findSmaller(a,b)<<" is the smaller of "<<a<<" and "<<b<<"\n";
    std::cout<<c.findSmaller(f1,f2)<<" is the smaller of "<<f1<<" and "<<f2<<"\n";
    std::cout<<c.findSmaller(c1,c2)<<" is the smaller of "<<c1<<" and "<<c2<<"\n";
    
    return 0;
}