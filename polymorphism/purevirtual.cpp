#include<iostream>
using namespace std;


class Test1{
    public:
    virtual void whomi() = 0;//pure virtual
};
class Test2:public Test1{
    public:
     void whomi() override{
        cout<<"I am test2" <<endl;
     }
};




int main(){
   Test2 *ptr = new Test2();
   ptr->whomi();//I am test1 without virtual
   

   
    
}