/*
Polymorphism:
    1. Polymorphism is a core concept in object-oriented programming that allows objects of different classes to be 
        treated as objects of a common superclass.
    2. It enables methods to be defined in a base class and overridden in derived classes, 
        allowing for dynamic method resolution at runtime.  
*/

#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    virtual void sound() { // Virtual function
        cout << "Animal makes a sound." << endl;
    }
};
// Derived class 1
class Dog : public Animal {
public:
    void sound() override { // Overriding base class method
        cout << "Dog barks." << endl;
    }
};
// Derived class 2
class Cat : public Animal {
public:
    void sound() override { // Overriding base class method
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* animal1 = new Dog(); // Pointer of base class type pointing to derived class object
    Animal* animal2 = new Cat(); // Pointer of base class type pointing to another derived class object

    animal1->sound(); // Output: Dog barks.
    animal2->sound(); // Output: Cat meows.

    delete animal1; // Clean up memory
    delete animal2; // Clean up memory

    return 0;
}

// Output:
// Dog barks.
// Cat meows.