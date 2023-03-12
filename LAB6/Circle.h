#include<iostream>
#include<string>
#include"Shape.h"
#define PI 3.1415926535897931
using namespace std;
class Circle : public Shape{
    private:
        int radius;
    public:
        Circle(const string& _color, int _radius);
        virtual ~Circle();
        virtual void print() override;
        virtual double get_area() override;
};
