#include<iostream>
using namespace std;

class parent{
    public:

    void display(){
        cout<<"hello";
    }

};
class child :public parent{
    public:
    void display(){
    cout<<"override hello";
    }

};
int main(){
    child c;
    c.display();
}