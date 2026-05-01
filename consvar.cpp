#include<iostream>
using namespace std;

int main(){
    char c;
    cin>>c;

    switch(c)
    {
        case 'a':  
        case 'e':  
        case 'i':   
        case 'o': 
        case 'u':
            cout<<"You entered a vowel"<<endl;
            break;
        default:
            cout<<"You entered a consonant"<<endl;
    }

}