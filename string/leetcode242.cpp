#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;



class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        
        vector<int> freq(26);

        for(auto c : s){
            freq[c-'a']++;
        }

        for(auto c : t){
            freq[c-'a']--;
            
        }

        return count(freq.begin(),freq.end(),0) == 26;//read this line twice and think

    }
};

int main(){
    Solution s;
    string str1 = "anagram";
    string str2 = "nagaram";
    cout<<s.isAnagram(str1,str2)<<endl;
}