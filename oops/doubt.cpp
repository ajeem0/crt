#include<iostream>
using namespace std;

class Student{
    public:
        
       void show(int x){cout<<"int";}
       void show(long x){cout<<"long";}
};


int main(){
  Student s;
  s.show('z');
    
}