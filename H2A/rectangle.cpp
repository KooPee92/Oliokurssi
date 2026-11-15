#include "rectangle.h"

Rectangle::Rectangle() {}


// Asettaa suorakulmion leveyden
void Rectangle::setWidth(double width)
{
    this->width = width;
}

// Asettaa suorakulmion korkeuden
void Rectangle::setHeight(double height)
{
    this->height = height;
}

// Laskee ja palauttaa suorakulmion pinta-alan
double Rectangle::getArea()
{
    return width * height;
}

// Laskee ja palauttaa suorakulmion ymparysmitan
double Rectangle::getCircum()
{
    return 2 * (width + height);
}