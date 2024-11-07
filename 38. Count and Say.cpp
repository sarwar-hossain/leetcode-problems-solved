#include<iostream>

//   38. Count and Say

class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        n--;
         while(n--){
            string r="";
            int c=1;
            s+="&";
            for(int i=1;i<s.size();i++){
                    if(s[i]!=s[i-1]){
                      r+=to_string(c)+s[i-1];
                      c=1;
                    }
                    else{
                        c++;
                    }
            }
            s=r;
         }

         return s;
        
    }
};