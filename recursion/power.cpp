#include<iostream>
using namespace std;

  double myPow(double x, long long n) {
        if(n==0) return 1.00;
        if(x==1) return 1.00;
        if(x==0) return 0.00;
        if(n<0)  return myPow(1/x,-n);

        if(n%2==0){
           return  myPow(x*x,n/2);
        }else{
            return x*myPow(x*x,n/2);
        }

    }

int main(){
    int a,b;
    cout<<"enter the two numbers : ";
    cin>>a>>b;
    double ans = myPow(a,b);
    cout<<"power is : "<<ans;
}