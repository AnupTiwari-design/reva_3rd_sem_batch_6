#include<iostream>
using namespace std;
class parent{
    // Pure virtual functions (abstract methods)
    protected:
    virtual void add()=0;

    virtual void display()=0;
     

};

class child:public parent{
    public:
    void add() override{
        cout<<4+7;
    }
    void display()override{
        cout<<"hello";
    }

};
int main(){
    child c;
    c.add();
    c.display();
    return 0;
}