/**Driver Code*/

/**
Programmer: Aleena Tomy
Project number: 1
Project Desc: Rectangle Class
Course: COSC-2436-007 (92905) III Data Structures
Date: 01/27/2024
*/

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle the_Rectangle;

    cout << "Initial state of the rectangle" << endl;
    cout << "    length = " << the_Rectangle.get_length() << endl;
    cout << "    width  = " << the_Rectangle.get_width() << endl;
    cout << "    area = " << the_Rectangle.get_area() << endl;

    double newLength, newWidth;

    cout << "Enter new length: ";
    cin >> newLength;

    cout << "Enter new width: ";
    cin >> newWidth;

    if (the_Rectangle.set(newLength, newWidth))
    {
        cout << "Current state of the rectangle" << endl;
        cout << "    length = " << the_Rectangle.get_length() << endl;
        cout << "    width   = " << the_Rectangle.get_width() << endl;
        cout << "    area  = " << the_Rectangle.get_area() << endl << endl;
    }
    else
    {
        cout << "Invalid input for length or width. Rectangle not updated." << endl;
    }

    return 0;
}
