#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    Student(){
      name="unknown";
      age=0;

    }
    void display(){

        cout<<"Name of student is"<<name<<" "<<"age of student is"<<age<<endl;
    }


};
int main(){

    Student s;
    s.name="Anurag";
    s.age=34;
    s.display();


    Student s1;
    s1.display();

}