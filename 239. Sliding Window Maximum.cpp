//3



class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> result;
        deque<int>dq;
        
        for(int i=0;i<n;i++){
            if(!dq.empty() && dq.front()<i-k+1){
                dq.pop_front();
            }

            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }

            dq.push_back(i);

            if(i>=k-1){
                result.push_back(nums[dq.front()]);
            }
        }
      
        return result;

        
    }
};










// solution :2 but time lemite is expand


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> result;
        
        int maxeliment=nums[0];
        for(int i=0;i<k;i++){
             maxeliment=max(maxeliment, nums[i]);
        }

        result.push_back(maxeliment);

        for(int i=1;i<n-k+1;i++){
             maxeliment=nums[i];
             for(int j=i;j<k+i;j++){
                maxeliment=max(maxeliment, nums[j]);
             }
             result.push_back(maxeliment);
        }

        return result;

        
    }
};