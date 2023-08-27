/*This program accepts inputs from the input.txt file*/ 

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


int main()
{
    string line;
    vector<string> lines; // Create a vector to store lines
    ifstream myfile("07_input.txt");
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            lines.push_back(line); // Store each line in the vector
        }
    }
    
    int year = stoi(lines[0]);
    int age = stoi(lines[1]);
    string name = lines[2];
    
    //print a message to the user
    cout<<"What year is your favorite? ";
    
    //get the user response and assign it to the variable year
    
    //output response to user
    cout<<"How interesting, your favorite year is "<<year<<"!\n";
    
    //print a message to the user
    cout<<"At what age did you learn to ride a bike? ";
    
    //get the user response and assign it to the variable age
    
    //output response to user
    cout<<"How interesting you learned to ride at "<<age<<"!\n";
    
    cout<<"What is your name? ";
    cout<<"Hello "<<name<<" !\n";

    return 0;
}