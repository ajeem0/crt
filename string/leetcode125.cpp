#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;




class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int n = s.size();
        int e = n-1;
        

        while(st<e){
            
            while( st < e && !isalnum(s[st])){
                st++;
            }

            while(st < e && !isalnum(s[e])){
                e--;
            }
            
                if(tolower(s[st])!= tolower(s[e])){
                return false;
            }
            
            st++;
            e--;
        }

        return true;
    }
};

int main(){
    Solution s;
    string str = "A man, a plan, a canal: Panama";
    cout<<(s.isPalindrome(str)?"true":"False") <<endl;
}