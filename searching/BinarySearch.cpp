#include<iostream>
using namespace std;


//first occurance 
// int main(){
//     int arr[6] = {1,5,5,5,5,6};
//     int s = 0;
//     int e = 5;
//     int target = 5;
//    int ans = -1;
//     while(s<=e){
//          int mid = s + (e-s)/2;
//         if(arr[mid] == target){
//             ans = mid;
//             e = mid-1;
//         }
//         else if(arr[mid] > target){
//             e = mid-1;
//         }
//         else{
//             s = mid +1;
//         }
        
//     }
//     cout<<ans;

// }


//last occurance
int main(){
    int arr[6] = {1,5,5,5,5,6};
    int s = 0;
    int e = 5;
    int target = 5;
   int ans = -1;
    while(s<=e){
         int mid = s + (e-s)/2;
        if(arr[mid] == target){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] > target){
            e = mid-1;
        }
        else{
            s = mid +1;
        }
        
    }
    cout<<ans;

}