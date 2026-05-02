#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int rev = 0;
    int temp = a;
    while(temp != 0){
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    if(rev == a)
        cout<<a<<" is a palindrome number."<<endl;
    else
        cout<<a<<" is not a palindrome number."<<endl;
    return 0;
}