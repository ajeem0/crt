#include<iostream>
using namespace std;

class Animal{//abstact
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
    virtual void speak() = 0;//pure virtual function
};
class dog:public Animal
{
    public:
    void speak(){
        cout<<"barks"<<endl;
    }
   
};
class cat:public Animal
{
    public:
    void speak(){
        cout<<"Meow"<<endl;
    }
   
};
class cow:public Animal
{
    public:
    void speak(){
        cout<<"bau"<<endl;
    }

};




int main(){
 dog d;
 d.eat();
 d.speak();
 cat c;
 c.eat();
 c.speak();
 cow cc;
 cc.speak();


}

