//2







class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int>maxdq, mindq;
        int left=0,result=0;

        for(int right=0;right<nums.size();right++){

            while(!maxdq.empty() && maxdq.back()<nums[right]){
                maxdq.pop_back();
            }

            maxdq.push_back(nums[right]);
        

         while(!mindq.empty() && mindq.back()>nums[right]){
                mindq.pop_back();
            }

            mindq.push_back(nums[right]);

            while(!maxdq.empty() && !mindq.empty() && (maxdq.front()-mindq.front())>limit){
                if(nums[left]==maxdq.front()){
                    maxdq.pop_front();
                }
                if(nums[left]==mindq.front()){
                    mindq.pop_front();
                }

                left++;

               
            }

             result=max(result, right-left+1);

        }
            
            return result;
    }
};