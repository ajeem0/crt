#include<iostream>
#include<vector>
using namespace std;

vector<int> fibo(105,-1);
void fibonacci(int n,int a = 0, int b = 1){
    if(n==0){
        cout<<a<<" ";
        return;
    }
    cout<<a<<" ";
    fibonacci(n-1,b,a+b);
}

int fibonacci2(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(fibo[n] != -1) return fibo[n];
    return fibo[n] = fibonacci2(n-1)+fibonacci2(n-2); //Memoization DP
    
   
}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    // fibonacci(n);
    cout<<fibonacci2(n)<<endl;
   
}