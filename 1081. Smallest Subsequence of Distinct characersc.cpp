#include<iostream>


class Solution {
public:
    string smallestSubsequence(string s) {
          unordered_map<char,int>um;
        unordered_set<char>us;
        stack<char>st;

        for(int i=0;i<s.size();i++){
            um[s[i]]=i;
        }

        for(int i=0;i<s.size();i++){

            char ch=s[i];

            if(us.find(ch)!=us.end()){
                continue;
            }

            while(!st.empty() && st.top()>ch && um[st.top()]>i){
                
                us.erase(st.top());
                st.pop();
            }

          st.push(ch);
          us.insert(ch);

        }

        string result="";

        while(!st.empty()){
            result=st.top() +result;
            st.pop();
        }

        return result;
    }
};