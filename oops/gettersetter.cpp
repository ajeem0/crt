#include<iostream>
using namespace std;

class Student{
int age;
int marks;
public:
  int getAge(){
    return age;
  }
  int getMarks(){
    return marks;
  }
  void setAge(int age){
    if(age>0){
        this->age = age;
    }
  }
  void setMarks(int marks){
    if(marks>=0 && marks<= 100){
        this->marks = marks;
        
    }
  }
};


int main(){
    Student s1;
    s1.setMarks(100);
    cout<<s1.getMarks();

}