#include<iostream>
using namespace std;

class BankAccount{
    private:
    int balance; //data hiding or abstraction
    public:
    BankAccount(int balance){
        this->balance = balance;
        cout<<"hurray you created a account"<<endl;
    }
    ~BankAccount(){
        cout<<"distructor"<<endl;
    }
    void deposit(int amount){
        balance += amount;
        cout<<"deposite successfully";
    }
    void withdraw(int amount){
        if(amount > balance){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance -= amount;
            cout<<"Withdrawl succesfuilly";
        }
    }
    int getBalance(){
        return balance;
    }
};

int main(){
    int bal;
    cout<<"Enter the balance :"<<endl;
    cin>>bal;
    BankAccount account(bal);
    while(true){
        int c;
        cout<<"enter some task";
        cin>>c;
        
        switch(c){
        case 1:
            cout<<"Enter amount for withdraw";
            int amo;
            cout<<"Enter amount which you want top withDraw :"<<endl;
            cin>>amo;
            account.withdraw(amo);
            break;
        case 2:
            cout<<"Enter amount for deposit";
            int am;
            cout<<"Enter amount which you want top Deposit :"<<endl;
            cin>>am;
            account.deposit(am);
            break;
        case 3:
            int b = account.getBalance();
            cout<<"your balance is : "<< b<<endl;
            break;
        
        case 4:
              return 0;
        default:
            cout<<"invalid";

    }


    }
    
      
    return 0;
}