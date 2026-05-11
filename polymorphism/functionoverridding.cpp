#include<iostream>
using namespace std;


class Test1{
    public:
    virtual void whomi(){//used when nessesary to used
        cout<<"I am test1" <<endl;
     }
};
class Test2:public Test1{
    public:
     void whomi(){
        cout<<"I am test2" <<endl;
     }
};




int main(){
   Test1 *ptr = new Test2();
   ptr->whomi();//I am test1 without virtual
   

   
    
}