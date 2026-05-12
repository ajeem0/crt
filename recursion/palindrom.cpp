#include<iostream>
#include<string>
using namespace std;

bool pal(string s){
  if(s.empty()) return true;
  if(s[0] != s[s.size()-1]) return false;
  return pal(s.substr(1,s.size()-2));

  
}
bool ispal(string s,int st, int e){
    if(st>=e) return true;
    if(s[st] != s[e]) return false;
    return ispal(s,st+1,e-1);
}

int main(){
    string s;
    cout<<"enter the string : ";
    cin>>s;
    bool ans = pal(s);
    bool ans2 = ispal(s,0,s.size()-1);
    cout<<"is palindrome : "<<(ans? "true":"false")<<endl;
    cout<<"is palindrome : "<<(ans2? "true":"false")<<endl;
}