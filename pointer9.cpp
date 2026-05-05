#include<iostream>
using namespace std;
void fun(int* p){
    p += 1;
    cout<<p<<endl;
}

int main(){
    int a = 3;
    int* p = &a;
    fun(p);
    cout<<&a<<endl;
   
    cout<<a;
}