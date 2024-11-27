//2





class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int result=0;
        for(int i=0;i<n-1;i++){
            result=max(result, nums[i+1]-nums[i]);
        }
        return result;
    }
};