#include<iostream>
using namespace std;    

int main()
{
    float radius, height, volume;
    cout<<"Enter the radius of the cylinder: ";
    cin>>radius;
    cout<<"Enter the height of the cylinder: ";
    cin>>height;

    volume = 3.14159 * radius * radius * height; // Volume of a cylinder = πr²h

    cout<<"The volume of the cylinder is: "<<volume<<endl;

    return 0;
}