/*
Class :
    1. A class is a blueprint for creating objects. 
    2. It defines a set of attributes and methods that the created objects will have.
Object:
    1. An object is an instance of a class.
    2. It contains data and methods defined by the class.
*/

// Example on object and class in C++

#include <iostream>
using namespace std;
class Car {
public:
    // Attributes
    string brand;
    string model;
    int year;

    // Method to display car details
    void displayDetails() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
    }
};

int main() {
    // Creating an object of the Car class
    Car myCar;

    // Setting attributes
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.year = 2020;

    // Displaying car details
    myCar.displayDetails();

    return 0;
}