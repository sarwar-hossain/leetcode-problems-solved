//2




class Solution {

public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int maxkadane=kadane(nums);

        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum+=nums[i];
        }
         
       for(int i=0;i<nums.size();i++){
           nums[i]=-nums[i];
       }

        int minkadane=kadane(nums);

        if(totalsum==-minkadane){
            return maxkadane;
        }

        int maxcircularsum=totalsum+minkadane;

        return max(maxkadane, maxcircularsum);
    }

    private:

int kadane(vector<int>& nums){
    int maxsum=nums[0], currentsum=nums[0];

    for(int i=1;i<nums.size();i++){
        currentsum=max(currentsum+nums[i], nums[i]);

        maxsum=max(maxsum, currentsum);
    }
    return maxsum;
}
};