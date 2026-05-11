#include<iostream>
using namespace std;


class Test1{
    int a;
    public:
    // friend class Test3;//no error if the class is not created
    friend void Test2::print(Test1 &obj);//error Test 2 is not created

};
class Test2{
    public:
    void print(Test1 &obj){
        cout<<obj.a;
    }
     
};




int main(){
    Test2 obj;
    obj.print();

   
    
}