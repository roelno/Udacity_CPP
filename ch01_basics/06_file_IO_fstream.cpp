#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream fileStream("myfile.txt", ios::in | ios::out | ios::app);

    // write
    if (fileStream.is_open())
    {
        fileStream << "\nI am adding a line.\n";
        fileStream << "I am adding another line.\n";
        fileStream.close();
    }
    else
        cout << "Unable to open file for writing\n";


    // read
    fileStream.open("myfile.txt", ios::in | ios::out);
    if (fileStream.is_open())
    {
        string line;
        while (getline(fileStream, line))
        {
            cout << "Read: " << line << endl;
        }
        fileStream.close();
    } else {
        cout << "Unable to open file for reading\n";
    }

    return 0;
}