#include<iostream>
//2

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0;
        int maxl=1;
        vector<vector<bool>> dp(n, vector<bool>(n, false));

        for(int i=0;i<n;i++){
            dp[i][i]=true;
        }

        for(int i=0;i<n-1;i++){
             if(s[i]==s[i+1]){
                dp[i][i+1]=true;
                start=i;
                maxl=2;
             }
        }

        for(int len=3;len<=n;len++){
            for(int i=0;i<n-len+1;i++){
                int j=i+len-1;
                if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j]=true;
                   
                   if(len>maxl){
                    maxl=len;
                    start=i;
                   }

                }
            }
        }

        return s.substr(start, maxl);
    }
};