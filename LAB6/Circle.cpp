#include"Circle.h"
Circle::Circle(const string& _color, int _radius):Shape(_color)
{
    radius = _radius;
    cout << "Build a new circle" << endl;
}
Circle:: ~Circle()
{
    cout << "Delete a circle" << endl;
}
void Circle:: print()
{
    Shape::print();
    cout << " circle,";
    cout << " radius " << radius << ",";
    cout << " area " << get_area() << endl;
}
double Circle:: get_area()
{
    return radius*radius*PI;
}
