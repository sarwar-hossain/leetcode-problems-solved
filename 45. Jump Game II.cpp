#include<iostream>
//2

class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int jump=0;
        int currend=0;
        int maxreach=0;

        for(int i=0;i<n-1;i++){
            maxreach=max(maxreach, nums[i]+i);

            if(i==currend){
                jump++;
                currend=maxreach;

                if(currend>=n-1){
                    break;
                }
            }
        }
        return jump;
    }
};