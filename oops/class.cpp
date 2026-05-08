#include<iostream>
using namespace std;


class Student{
    public:
    string name;
    int age;
    void display(){
       cout<<"hi I am "<<name;
    }
};

int main(){
    Student s1;
    s1.name = "Ajeem";
    s1.age = 21;
    s1.display();
}