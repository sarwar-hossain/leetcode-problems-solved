#include<iostream>
//1


class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1 && trust.empty()){
            return 1;
        }

        vector<int>ind(n+1,0);
        vector<int>outd(n+1,0);

        for(const auto& relation : trust){
            int a=relation[0];
            int b=relation[1];
            ind[b]++;
            outd[a]++;
        }

        for(int i=1;i<=n;i++){
            if(ind[i]==n-1 && outd[i]==0){
                return i;
            }
        }

        return -1;
    }
};