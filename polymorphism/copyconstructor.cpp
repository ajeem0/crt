#include<iostream>
using namespace std;



class Test{
    public:
     int a;
     int *b;
     Test(int x=0,int y=0){
        a = x;
        b = new int(y);
     }
     Test(Test &obj){
        a = obj.a;
        // b = obj.b.  point same variable in draw.io
        b = new int(*obj.b);  // make the different pointer
     }

};



int main(){
   

    Test obj1(10,20);
    Test obj2 = obj1;//default copy constructor. 
    obj1.a = 100;
    cout<<obj2.a<<endl;
    *obj1.b = 200;
    cout<<*obj2.b;

    
    
}