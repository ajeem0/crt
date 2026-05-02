#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    bool isPrime = true;

    for(int i=2;i<=a/2;i++){
        if(a%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime && a > 1)
        cout<<a<<" is a prime number."<<endl;
    else
        cout<<a<<" is not a prime number."<<endl;
    return 0;
}