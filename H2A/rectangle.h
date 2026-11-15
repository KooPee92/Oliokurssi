#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle();
    void setWidth(double width);
    void setHeight(double height);
    double getArea();
    double getCircum();
};

#endif // RECTANGLE_H