#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m = n*n;
    int r =0;
    if(m == 0){
        cout<<"Neon number"<<endl;
        return 0;
    }
    while(m != 0){
         r += m%10;
        if(r == n){
            cout<<"Neon number"<<endl;
            return 0;
        }
        m /= 10;
    }
    cout<<"Not a neon number"<<endl;

}