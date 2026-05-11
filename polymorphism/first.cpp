#include<iostream>
using namespace std;

class Test{
    public:
     void sum(int a,int b){
        cout<<"sum1 is called"<<endl;
     }
     void sum(int a,int b=0,int c=0){
        cout<<"sum2 is called"<<endl;
     }
    //  void sum(int a,int b,int c=0){//no function overloading
    //     cout<<"sum2 is called"<<endl;
    //  }
};


int main(){
    Test t;
    t.sum(2);
    t.sum(2,3,4);
    return 0;
}