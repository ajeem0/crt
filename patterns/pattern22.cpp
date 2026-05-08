#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            int di = i>n ? i-n : n-i;
            int dj = j>n ? j-n : n-j;
            int val = 1 + (di>dj ? di : dj);
            cout<<val;
        }
        cout<<endl;
    }
    return 0;
}

