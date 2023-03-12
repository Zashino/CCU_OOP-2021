#include"Rectangle.h"
Rectangle::Rectangle(const string& _color, int _height, int _width):Shape(_color)
{
    height = _height;
    width = _width;
    cout << "Build a new rectangle" << endl;
}
Rectangle:: ~Rectangle()
{
    cout << "Delete a rectangle" << endl;
}
void Rectangle:: print()
{
    Shape::print();
    cout << " rectangle,";
    cout << " height " << height << ",";
    cout << " width " << width << ",";
    cout << " area " << get_area() << endl;
}
double Rectangle:: get_area()
{
    return height*width;
}
