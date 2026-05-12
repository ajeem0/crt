#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;



//O(n2)->O(n)  HomeWork: O(n) 
class Solution {
public:
    string reverseWords(string s) {
        int n= s.length();
        string ans;
        reverse(s.begin(),s.end());
        stringstream ss(s);//meaning of the stringstream 
      
            string word = "";
            while(ss >> word){
             reverse(word.begin(),word.end());
            if(word.size() > 0){
                ans += " " + word;
            }
            }
        
        return ans.substr(1);
    }
};


int main(){
    Solution s;
    string str = "Hello World";
    cout<<s.reverseWords(str)<<endl;
}