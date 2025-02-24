class Solution {
    private:
    int digits(int num){
        int digit=0;
        while(num>0){
            num/=10;
            digit++;
        }
        return digit;
    }
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(digits(nums[i])%2==0){
                count++;
            }
        }
        return count;
    }
};