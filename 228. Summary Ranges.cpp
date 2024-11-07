#include<iostream>



class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>re;
         int l=0;
         if(nums.empty()){
            return re;
         }

         for(int r=1;r<=nums.size();r++){
            if(r==nums.size() || nums[r]!=nums[r-1]+1){
                 if(l==r-1){
                    re.push_back(to_string(nums[l]));
                 }
                 else{
                   re.push_back(to_string(nums[l]) + "->" + to_string(nums[r - 1]));
                 }
                
                l=r;
            }
    }

    return re;
       
    }
};