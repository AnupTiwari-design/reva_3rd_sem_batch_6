#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void accelerate() {
        cout << brand << " is moving at " << speed << " km/h" << endl;
    }
};
int main(){
    Car c;
    c.brand="BMW";
    c.speed=100;
    c.accelerate();


    Car c1;
    c1.brand="Tata";
    c1.speed=200;
    c1.accelerate();
}