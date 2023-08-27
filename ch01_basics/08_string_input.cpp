#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    string line;
    vector<string> lines; // Create a vector to store lines
    ifstream myfile("08_input.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            lines.push_back(line); // Store each line in the vector
        }
    }

    cout << lines[0] << "\n\t\t" << lines[1] << "\n\t\t" << lines[2] << endl;
    cout << lines[3] << "\n\t\t" << lines[4] << "\n\t\t" << lines[5] << endl;
    return 0;
}