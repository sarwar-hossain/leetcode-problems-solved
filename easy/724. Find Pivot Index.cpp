class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum=accumulate(nums.begin(), nums.end(), 0);
        int leftSum=0;
        for(int i=0;i<nums.size();i++){
            if(2*leftSum==totalSum-nums[i]){
                return i;
            }
            else{
                leftSum+=nums[i];
            }
        }

        return -1;
    }
};