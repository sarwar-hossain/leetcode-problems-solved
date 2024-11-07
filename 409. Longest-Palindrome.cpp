#include<iostream>

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,  int>um;

        for(int i=0;i<s.size();i++){
            um[s[i]]++;
        }

        int result=0;
        bool flag=0;

        for(const auto& i : um){
            if(i.second%2==0){
                result+=i.second;
            }
            else{
                result+=i.second-1;
                flag=1;
            }
        }

        if(flag==1){
            result++;
        }

        return result;

    }
};