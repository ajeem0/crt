#include<iostream>
using namespace std;

class Test1;//for resolving error1
class Test2{
    public:
    void print(Test1 &obj);
     
};
class Test1{
    int a=10;
    public:
    // friend class Test3;//no error if the class is not created
    friend void Test2::print(Test1 &obj);//error1 Test 2 is not created

};

void Test2::print(Test1 &obj){
  cout<<obj.a;
}




int main(){
    Test2 obj;
    Test1 obj2;
    obj.print(obj2);

   
    
}