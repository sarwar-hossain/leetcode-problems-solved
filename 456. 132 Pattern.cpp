#include<iostream>
//2



class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return false;
        }

        int third=INT_MIN;
        stack<int>s;

        for(int i=n-1;i>=0;i--){
             if(nums[i]<third){
                return true;
             }
             while(!s.empty() && nums[i]>s.top()){
                third=s.top();
                s.pop();
             }
             s.push(nums[i]);
        }

        return false;
    }
};