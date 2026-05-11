#include<iostream>
using namespace std;

// //gave diamond problem
// class A{
//  public:
//  A(){
//     cout<<"this is class A"<<endl;
//  }
// };

// class B : public A{
//  public:
//  B(){
//     cout<<"this is class B"<<endl;
//  }
// };

// class C: public A{
//  public:
//  C(){
//     cout<<"this is class C"<<endl;
//  }
// };

// class D:public B,public C{
//     public:
//  D(){
//     cout<<"this is class D"<<endl;
//  }
// };


//this is solution via virtual inherit 

class A{
 public:
 A(){
    cout<<"this is class A"<<endl;
 }
};

class B :virtual public A{
 public:
 B(){
    cout<<"this is class B"<<endl;
 }
};

class C:virtual public A{
 public:
 C(){
    cout<<"this is class C"<<endl;
 }
};

class D: public B, public C{
    public:
 D(){
    cout<<"this is class D"<<endl;
 }
};


int main(){
    D d;
    return 0;
}