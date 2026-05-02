#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int sum =0;
    int num = 0;
    int nm = n;
    int fac = 1;
    int count = int(log10(n) +1);//counting of the number of the num 
    cout<<"Count = "<<count;

   while(n!= 0){
    int m = n%10;
    sum += m;
    n /= 10;
    num++;
   }
    while(nm !=0){
        fac *= nm;
        nm --;
    }
   cout<<"sum = "<<sum<<endl;
   cout<<"num = "<<num<<endl;
   cout<<"fac ="<<fac;

   return 0;
}