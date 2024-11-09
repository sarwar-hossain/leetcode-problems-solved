#include<iostream>
//1


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ng=g.size();
        int ns=s.size();
        int i=0,j=0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while(i<ns && j<ng){
            if(s[i]>=g[j]){
                j++;
            }
            i++;
        }

        return j;
    }
};