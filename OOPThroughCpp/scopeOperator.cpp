/*
Write a CPP program to demonstrate the scope resolution operator to access a global variable when a 
local variable with the same name exists.
*/

// Write a CPP program to demonstrate the scope resolution operator to access a global variable when a local variable with the same name exists.
#include <iostream>
using namespace std;
// Global variable
int x = 10;
int main()
{
    // Local variable with the same name
    int x = 20;

    // Displaying local variable
    cout << "Local x: " << x << endl; // Output: 20

    // Using scope resolution operator to access global variable
    cout << "Global x: " << ::x << endl; // Output: 10

    return 0;
}

// Output:
// Local x: 20
// Global x: 10