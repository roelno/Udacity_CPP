#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string lengthStr, widthStr;
    double length = 0;
    double width = 0;

    std::cout << "Enter the length of your room: ";
    std::getline(std::cin, lengthStr);
    std::cout << "Enter the width of your room: ";
    std::getline(std::cin, widthStr);

    std::stringstream(lengthStr) >> length;
    std::stringstream(widthStr) >> width;

    double area = length * width;
    std::cout << "The area of your room is " << area << "\n";

    return 0;
}