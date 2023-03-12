#include <iostream>
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main(){
    vector<Shape*> shape;
    shape.push_back(new Circle("orange", 9));
    shape.push_back(new Triangle("Red", 4, 10));
    shape.push_back(new Rectangle("green", 80, 80));
    shape.push_back(new Circle("blue", 77));
    shape.push_back(new Triangle("Yellow", 8 ,20));
    shape.push_back(new Rectangle("pink", 5, 5));
    cout << endl << endl;

    cout << "Printing all shapes" << endl;
    for(int i=0; i<shape.size(); i++){
        shape[i]->print();
    }
    cout << endl << endl;

    cout << "Printing only circles" << endl;
    for(int i=0; i<shape.size(); i++){
        if(typeid(*shape[i]) == typeid(Circle)){
            shape[i]->print();
        }
    }
    cout << endl << endl;

    cout << "Delete  objects" << endl;
    for(int i=0;i<shape.size();i++){
        delete shape[i];
    }

}
