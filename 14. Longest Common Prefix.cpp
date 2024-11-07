#include<iostream>
//1


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<string>v=strs;
         string ans="";
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<first.size();i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};