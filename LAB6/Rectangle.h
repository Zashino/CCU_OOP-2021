#include<iostream>
#include<string>
#include"Shape.h"
using namespace std;
class Rectangle : public Shape{
    private:
        int height;
        int width;
    public:
        Rectangle(const string& _color, int _height, int _width);
        virtual ~Rectangle();
        virtual void print() override;
        virtual double get_area() override;
};
