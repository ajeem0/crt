#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 2;
                        
                         
    bool ok = a!=b && a++ && ++b;
    cout<<ok<<endl<<a<<endl<<b<<endl;
}