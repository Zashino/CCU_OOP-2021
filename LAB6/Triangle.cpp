#include"Triangle.h"
Triangle::Triangle(const string& _color, int _height, int _base):Shape(_color)
{
    height = _height;
    base = _base;
    cout << "Build a new triangle" << endl;
}
Triangle:: ~Triangle()
{
    cout << "Delete a triangle" << endl;
}
void Triangle:: print()
{
    Shape::print();
    cout << " triangle,";
    cout << " height " << height << ",";
    cout << " base " << base << ",";
    cout << " area " << get_area() << endl;
}
double Triangle:: get_area()
{
    return height*base/2;
}
