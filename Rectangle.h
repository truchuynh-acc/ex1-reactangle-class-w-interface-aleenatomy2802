/**Rectangle.h Code*/
#ifndef RECTANGLE_
#define RECTANGLE_

#include "RectangleInterface.h"
using namespace std;

class Rectangle : public RectangleInterface
{
public:
    Rectangle();
    bool set(double new_length, double new_width);
    double get_length() const;
    double get_width() const;
    double get_area() const;

private:
    double length;
    double width;
};
#endif
