#include<iostream>
#include<string>
#include"Shape.h"
using namespace std;
class Triangle : public Shape{
    private:
        int height;
        int base;
    public:
        Triangle(const string& _color, int _height, int _base);
        virtual ~Triangle();
        virtual void print() override;
        virtual double get_area() override;
};
