#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int sum = 0;
    if(a<=0){
        cout<<"Please enter a positive integer."<<endl;
        return 1;
    }
    for(int i=1;i<a;i++){
        if(a%i == 0)
            sum += i;
    }
    if(sum == a)
        cout<<a<<" is a perfect number."<<endl;
    else
        cout<<a<<" is not a perfect number."<<endl;
    return 0;
}