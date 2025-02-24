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



/*


Example 1:

Input: nums = [0,1,2,4,5,7]
Output: ["0->2","4->5","7"]
Explanation: The ranges are:
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"
Example 2:

Input: nums = [0,2,3,4,6,8,9]
Output: ["0","2->4","6","8->9"]
Explanation: The ranges are:
[0,0] --> "0"
[2,4] --> "2->4"
[6,6] --> "6"
[8,9] --> "8->9"


*/