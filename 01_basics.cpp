// Topic: Variables & Data Types
#include <iostream>
using namespace std;

int main() {
    int age = 21;              // whole numbers
    double price = 9.99;       // decimal numbers
    char grade = 'A';          // single character
    bool isStudent = true;     // true/false
    string name = "Alex";      // text (needs #include <string>)

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is student: " << isStudent << endl;

    cout << "Size of int: " << sizeof(age) << " bytes" << endl;

    return 0;
}
