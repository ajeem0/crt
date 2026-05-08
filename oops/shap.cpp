#include<iostream>
using namespace std;

class Shape{//abstact
    public:
    virtual int perimeter() = 0;
    virtual int area() = 0;//pure virtual function
};
class circle:public Shape
{
    int r;
    public:
    
    circle(int r){
        this->r = r;
        cout<<"circle created"<<endl;
    }
    int perimeter(){
        return 2*3.14*this->r;    
    }
    int area(){
        return 3.14*this->r*this->r;
    }
     ~circle(){
        cout<<"circle destroyed"<<endl;
    }
   
};
class square:public Shape
{
    int a;
    public:
    square(int a){
        this->a = a;
        cout<<"Square is created"<<endl;
    }
    ~square(){
        cout<<"Square is destroyed"<<endl;
    }

    int perimeter(){
        return 4*this->a;    
    }
    int area(){
        return this->a*this->a;
    }
   
};
class rectangle:public Shape
{
    int a;
    int b;
    public:
    rectangle(int a,int b){
        this->a = a;
        this->b = b;
        cout<<"Srectangle is created"<<endl;
    }
    ~rectangle(){
        cout<<"rectangle is destroyed"<<endl;
    }

    int perimeter(){
        return 2*(this->a+this->b);    
    }
    int area(){
        return this->a*this->b;
    }
   
};




int main(){
    circle c(5);
    square s(4);
    rectangle r(2,4);

  while(true){
    int d;
    cout<<"1 for circle /n 2 for square /n 3 for rectangle";
    cin>>d;
    switch(d){
        case 1 :
         cout<<"perimeter of circle: "<<c.perimeter()<<endl;
         cout<<"area of circle: "<<c.area()<<endl;
         break;
         case 2 :
         cout<<"perimeter of square: "<<s.perimeter()<<endl;
         cout<<"area of square: "<<s.area()<<endl;
         break;
         s.area();
         case 3 :
         cout<<"perimeter of rectangle: "<<r.perimeter()<<endl;
         cout<<"area of rectangle: "<<r.area()<<endl;
         break;
         case 4:
         return 0;
         

    }
  }


}

