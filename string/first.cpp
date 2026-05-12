#include<iostream>
#include<string>
using namespace std;

int main(){
    string a = "AjeemSilawat";
    cout<<a.size()<<endl;
    cout<<a.length()<<endl;
    cout<<a.at(4)<<endl;
    cout<<a.substr(3,4)<<endl;
    a.push_back('t');
    cout<<a<<endl;
    a.pop_back();
    cout<<a<<endl;
    sort(a.begin(),a.end());
    cout<<a<<endl;
    reverse(a.begin(),a.end());
    cout<<a<<endl;
    cout<<count(a.begin(),a.end(),'a');
    

}