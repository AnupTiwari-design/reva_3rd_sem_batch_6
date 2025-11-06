#include<iostream>
using namespace std;
class Calculation{
    public:

    void calci(int a,int b){
        cout<<a+b<<endl;
    }

    void calci(int a,float b){
        cout<<a*b<<endl;
    }

    void calci(){
        cout<<4/2;
    }
};
int main(){
    Calculation c;
    c.calci(3,8);
    c.calci(5,6.7f);
    c.calci();
}