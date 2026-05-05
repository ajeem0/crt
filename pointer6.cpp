#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* p = &a;
    int** q = &p;
    *p += 5;
    **q += 5;
   
    cout<<a;
}