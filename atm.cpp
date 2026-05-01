#include<iostream>
#include<string>
using namespace std;


//menu-driven problems 
int main()
{
    
    int balance = 1000; // Example balance
    while(true){
        char ch;
       cout<<"What do you want: (withdraw(w)/deposit(d)/check balance(c) exit(e)): ";
       cin>>ch;
        switch(ch)
        {
            case 'w':
                int amount;
                cout<<"Enter amount to withdraw: ";
                cin>>amount;
                if(amount > balance)
                    cout<<"Insufficient funds!"<<endl;
                else
                    balance -= amount;
                break;
            case 'd':
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                balance += amount;
                break;
            case 'c':
                cout<<"Your current balance is: "<<balance<<endl;
                break;
                case 'e':
                cout<<"Exiting..."<<endl;
                return 0;
            default:
                cout<<"Invalid option!"<<endl;
        }
    }
    
}