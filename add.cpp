#include<iostream>
using namespace std;

int main(){
    int a = 4;

    int* p = &a;
    int**p2 = &p;
    cout<<a<<" "<<p<<" "<<p2<<" "<<&p2<<endl;
    cout<<*p<<" "<<*p2<<" "<<**p2<<endl;
    
} 