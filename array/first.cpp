#include<iostream>
using namespace std;

int main(){
    // int arr[10] = {1,2,3,4};
    // arr[4] = 50;
    // for(int i=0;i<4;i++){
    //     cout<<arr[i];
    // }

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    cout<<arr.size()<<endl;//vector ke andar kitne elements present hai
    cout<<arr[4];

}