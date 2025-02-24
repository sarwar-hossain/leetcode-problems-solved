class Solution {
    private:
    int digitSum(int num){
        int sum=0;
        while(num>0){
            int digit=num%10;
            sum+=digit;
            num/=10;
        }
        return sum;
    }
public:
    int differenceOfSum(vector<int>& nums) {
        int eSum=0, dSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            eSum+=nums[i];
            dSum+=digitSum(nums[i]);
        }

        int result=max(eSum-dSum, dSum-eSum);

        return result;
    }
};