#include<iostream>
//2

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
           vector<vector<int>> iv= intervals;
           iv.push_back(newInterval);
        
        sort(iv.begin(), iv.end());
        vector<vector<int>> result;
        result.push_back(iv[0]);

        for(int i=1;i<iv.size();i++){
            vector<int>& last=result.back();

            if(iv[i][0]<=last[1]){
                last[1]=max(last[1],iv[i][1]);
            }
            else{
                result.push_back(iv[i]);
            }
        }


        return result;
    }
};