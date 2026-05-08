#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Before swapping: a = "<<a<<" b = "<<b<<endl;
    
   //swaping using third variable
    int temp = a;
    a = b;
    b = temp;

    cout<<"After swapping: a = "<<a<<" b = "<<b<<endl;

    //swaping without using third variable
    a = a + b; 
    b = a - b; 
    a = a - b; 
    cout<<"After swapping without using third variable: a = "<<a<<" b = "<<b<<endl;
    
    return 0;
}