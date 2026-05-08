#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int roll;
    
    Student(int roll,string name){
        this->name = name;
        this->roll = roll;
    }
    Student(string name,int roll){
        this->name = name;
        this->roll = roll;
    }
    Student(Student &obj){
        this->name = obj.name;
        this->roll = obj.roll;
        cout<<"Name: "<<this->name<<endl;
            cout<<"Roll: "<<this->roll<<endl;
        
    }
    ~Student(){
        cout<<"distructor1"<<endl;
    }
        void setData(string n, int r){
            name = n;
            roll = r;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll: "<<roll<<endl;
        }
};

int main(){
    Student s1(12,"ajeem");
    s1.display();
    Student s2("naman",21);
    s2.display();
    Student s3(s2);
    Student s4 = s2;
    
}