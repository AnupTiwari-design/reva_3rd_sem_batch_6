#include <iostream>
using namespace std;

class Student {
public:
    string name;

    // Constructor
    Student(string n) {
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Student s1("Anup");
    Student s2("Ravi");

    cout << "Inside main function..." << endl;

    return 0; // destructors called automatically here
}