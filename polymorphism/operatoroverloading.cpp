#include<iostream>
using namespace std;

// class Test{
//     public:
//      int a;
//      int b;
//      Test(int a=0,int b=0){
//         this->a = a;
//         this->b = b;
//      }

//     Test sum(Test &obj){
//         Test ans;
//        ans.a =  a + obj.a;
//        ans.b = b + obj.b;
//        return ans;
//      }
// };  without the operator overloading


// //with oprator iverloading
class Test{
    public:
     int a;
     int b;
     Test(int a=0,int b=0){
        this->a = a;
        this->b = b;
     }


    //operator which are 
    Test operator +(const Test &obj){// const for no anyone change the object value not nessecary but good to have
        Test ans;
       ans.a =  a + obj.a;
       ans.b = b + obj.b;
       return ans;
     }
};



int main(){
   

    Test obj(10,20);
    Test obj2(100,200);

    Test obj3 = obj +obj2;
    
     Test obj4 = obj2 +obj;
    cout<<obj3.a<<" "<<obj3.b<<endl;
    cout<<obj4.a<<" "<<obj4.b;
    
}