#include <iostream>
#define pi 3.14
using namespace std;

class Circle {
public:
    float radius;  // data member


    // 🧱 Parameterized Constructor
    Circle(float r) {
        radius = r;
    }

    // 🧮 Function to calculate and print area
    void calculateArea() {
        float area = pi * radius * radius;
        cout << "Area of circle: " << area << endl;
    }
};

int main() {
    float r;
    cout << "Enter radius of circle: ";
    cin >> r;

    // Create object using parameterized constructor
    Circle c(r);

    c.calculateArea();

    return 0;
}