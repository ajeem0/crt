#include<iostream>
using namespace std;
void fun(int* p,int* q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
void funr(int &ra,int &rb){
    int temp = ra;
    ra = rb;
    rb = temp;
}

int main(){
    int a = 3;
    int b = 5;
    int* p = &a;
    int* q = &b;
    fun(p,q);
     cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    funr(a,b);
   
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}