#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

    /* *** 1. Writing to the File *** */

    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myfileI ("input.txt", ios::app);
    /*
    Here's what ios::app does:
    When you open a file for writing using an output file stream (ofstream) and you
    include the ios::app flag as one of the arguments, it indicates that any data
    you write to the file will be added to the end of the existing content, rather
    than starting from the beginning and potentially overwriting the previous content.
    */
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";
  

    /* *** 2. Reading from the File *** */

    //create an input stream to read the file
    ifstream myfileO ("input.txt");
    //During the creation of ifstream, the file is opened. 
    //So we do not have explicitly open the file. 
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }
    
    else cout << "Unable to open file for reading";
    
    return 0;
}