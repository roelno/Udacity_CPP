/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

int main()
{
    int givenInt = 10;
    int *pInt = &givenInt;
    std::cout << "pInt points to address " << pInt << '\n';
    std::cout << "pInt points to " << * pInt << '\n';
    
    float givenFloat = 9.9;
    float *pFloat = &givenFloat;
    std::cout << "pFloat points to address " << pFloat << '\n';
    std::cout << "pFloat points to " << * pFloat << '\n';
    
    double givenDouble = 9.99;
    double *pDouble = &givenDouble;
    std::cout << "pDouble points to address " << pDouble << '\n';
    std::cout << "pDouble points to " << * pDouble << '\n';
    
    std::string givenString = "nine";
    std::string *pStr = &givenString;
    std::cout << "pStr points to address " << pStr << '\n';
    std::cout << "pStr points to " << * pStr << '\n';
    
    char *givenChar = "Ahuu";
    std::cout << "givenChar points to address " << givenChar << '\n';
    std::cout << "givenChar points to " << * givenChar << '\n';

    char givenChar2 = 's';
    char *pChar = givenChar;
    std::cout << "pChar points to address " << (void*)pChar << '\n';
    std::cout << "pchar points to " << * pChar << '\n';


    
    return 0;
}
