/*
Encapsulation:
    Encapsulation is a fundamental concept in object-oriented programming that restricts direct access to an object's data and methods, 
    allowing for controlled interaction through public interfaces. This promotes data hiding, reduces complexity, 
    and enhances maintainability.
*/


#include <iostream>
using namespace std;

class Student {

private:   // data is hidden from outside
    string name;
    int age;

public:
    // Setter functions (to set values safely)
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        if(a > 0)   // validation logic
            age = a;
        else
            cout << "Invalid age!" << endl;
    }

    // Getter functions (to access values safely)
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student s;
    s.setName("Raja");
    s.setAge(20);

    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;

    return 0;
}
