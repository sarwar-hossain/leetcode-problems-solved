class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1 = -1, max2 = -1, maxIndex = -1;
    
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > max1) {
            max2 = max1;   
            max1 = nums[i];
            maxIndex = i;
        } else if (nums[i] > max2) {
            max2 = nums[i];
        }
    }
    
    return (max1 >= 2 * max2) ? maxIndex : -1;
    }
};