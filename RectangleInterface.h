/** RectangleInterface Code*/
#ifndef RECTANGLE_INTERFACE_
#define RECTANGLE_INTERFACE_

//  Listing 2
/** @file RectangleInterface.h */

class RectangleInterface
{
public:
    /** Updates the length and width of this Rectangle
    @param  new_length the new length for this Rectangle
    @pre    new_length must be larger than zero
    @post   If new_length is valid, the length
            of this object is set to new_length
            Otherwise, the Rectangle is not updated
    @return  True if this object is updated,
            and false otherwise. */
    virtual bool set(double new_length, double new_width) = 0;
    virtual double get_length() const = 0;
    virtual double get_width() const = 0;
    virtual double get_area() const = 0;

    /** Destroys this Circle and frees its assigned memory. */
    virtual ~RectangleInterface() {}
};
#endif
