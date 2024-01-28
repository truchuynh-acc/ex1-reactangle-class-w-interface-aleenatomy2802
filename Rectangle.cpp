/**Rectangle.cpp Code*/


/**Rectangle.cpp Code*/
#include "Rectangle.h"

Rectangle::Rectangle()
{
    length = 1.0;
    width = 1.0;
}

bool Rectangle::set(double new_length, double new_width)
{
    if (new_length > 0.0 && new_width > 0.0)
    {
        length = new_length;
        width = new_width;
        return true;
    }
    return false;
}

double Rectangle::get_length() const
{
    return length;
}

double Rectangle::get_width() const
{
    return width;
}

double Rectangle::get_area() const
{
    return length * width;
}
