#include"Shape.h"
Shape::Shape(const string& _color)
{
    color = _color;
    cout << "Build a shape" << endl;
}
Shape:: ~Shape()
{
    cout << "Delete a shape" << endl;
}
void Shape::print(){
    cout << color;
}
