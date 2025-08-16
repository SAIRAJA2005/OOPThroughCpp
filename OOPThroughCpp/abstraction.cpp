/*
Abstraction:
    Abstraction means hiding implementation details and showing only the essential features to the user.
    In C++, we achieve abstraction mainly using abstract classes (with pure virtual functions) or interfaces.
*/

#include <iostream>
using namespace std;

// Abstract class (cannot be instantiated)
class Shape {
public:
    // Pure virtual function (only declaration, no body)
    virtual void draw() = 0;
};

// Derived class 1
class Circle : public Shape {
public:
    void draw(){
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw(){
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw();   // Output: Drawing a Circle
    shape2->draw();   // Output: Drawing a Rectangle

    delete shape1;
    delete shape2;

    return 0;
}
