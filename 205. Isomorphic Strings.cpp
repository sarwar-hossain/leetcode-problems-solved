#include<iostream>

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char>us;
         unordered_map<char, char>ut;
         if(s.size()!=t.size()){
            return false;
         }

         for(int i=0;i<s.size();i++){
            char sc=s[i];
            char tc=t[i];

            if(us.count(sc)){
                if(us[sc]!=tc){
                    return false;
                }
            }
            else {
                us[sc]=tc;
            }

              if(ut.count(tc)){
                if(ut[tc]!=sc){
                    return false;
                }
            }
            else {
                ut[tc]=sc;
            }

         }

         return true;
    }
};