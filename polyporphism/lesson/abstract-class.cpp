/*
 *  abstract-class.cpp
 *  Author: Mark Robrigado
 *  Date: 04 January 2023
 *  Description: Provides information on pure virtual functions and abstract class.
*/

#include<iostream>
#include<vector>

class Shape {
public:
    /* Pure virtual functions */
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape() {}
};

class OpenShape : public Shape {
public:
    virtual ~OpenShape() {}
};

class ClosedShape : public Shape {
public:
    virtual ~ClosedShape() {}
};

class Line : public OpenShape {
public:
    virtual void draw() override {
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Line() {}
};

class Circle : public ClosedShape {
public:
    virtual void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a circle" << std::endl;
    }
    virtual ~Circle() {}
};

int main() {

    /*
     *  Abstract class
     *  
     *  Abstract base class are generic class to create objects from.
     *  It serves as a parent to Derived classes that may have objects.
     *  Abstract classes must contain at least one pure virtual function.
     * 
     *  Pure virtual function
     * 
     *  Pure virtual functions are used to make a class abstract.
     *  Specified with `=0` in declaration and typically do not have implementations.
     *  Derived classes must override the base class.
    */
    /* Base pointers */
    Shape *circle = new Circle();
    Shape *line = new Line();

    std::vector<Shape *> shapes {circle, line};

    for (const auto shape : shapes) {
        shape->draw();
        shape->rotate();
    }

    /* Delete pointers */
    delete circle;
    delete line;

    return 0;
}