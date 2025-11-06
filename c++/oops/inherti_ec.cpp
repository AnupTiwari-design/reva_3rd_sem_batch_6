#include<iostream>
using namespace std;

class Animal{
    public:
    void display(){
        cout<<"call from parent class"<<endl;
    }

};
class Dog{
    public:
    void sound(){
        cout<<"bark"<<endl;
    }

};
class puppy:public Dog,public Animal{
    public:
    void display1(){
        cout<<"call from puppy class";
    }

};
int main(){

    puppy p;
    p.sound();
    p.display();
    p.display1();
}