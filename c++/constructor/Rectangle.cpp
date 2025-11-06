#include<iostream>
using namespace std;

class Rectangle{
    public:

    int length;
    int breadth;
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    void area(){
        cout<<"Area of rectangle "<<length*breadth;

    }
};
int main(){
    Rectangle r(9,8);
    r.area();
}