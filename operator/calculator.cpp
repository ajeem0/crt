#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char c;
    cout<<"Enter two numbers: ";
    cin>>a>>c>>b;
    
    
    
    switch(c)
    {
        case '+':
            cout<<"The sum is: "<<a+b<<endl;
            break;
        case '-':
            cout<<"The difference is: "<<a-b<<endl;
            break;
        case '*':
            cout<<"The product is: "<<a*b<<endl;
            break;
        case '/':
            if(b != 0)
                cout<<"The quotient is: "<<a/b<<endl;
            else
                cout<<"Error: Division by zero!"<<endl;
            break;
        case '%':
            if(b != 0)
                cout<<"The modulus is: "<<a%b<<endl;
            else
                cout<<"Error: Division by zero!"<<endl;
            break;
        default:
            cout<<"Invalid operator!"<<endl;
    }
    
    return 0;
}