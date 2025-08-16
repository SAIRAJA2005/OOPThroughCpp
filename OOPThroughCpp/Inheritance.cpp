/*
Inheritance:
    1. Inheritance is a fundamental concept in object-oriented programming that allows a class (derived class) 
        to inherit properties and behaviors (data members and methods) from another class (base class).
    2. This promotes code reusability and establishes a hierarchical relationship between classes.
*/

#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};
// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};
// Derived class
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};
int main() {
    Dog dog;
    Cat cat;

    // Using base class method
    dog.eat();  // Output: Animal is eating.
    cat.eat();  // Output: Animal is eating.

    // Using derived class methods
    dog.bark(); // Output: Dog is barking.
    cat.meow(); // Output: Cat is meowing.

    return 0;
}