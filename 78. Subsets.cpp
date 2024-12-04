//2









class Solution {
    private:
    void backtrack(vector<vector<int>> &result, vector<int> &current, vector<int> &nums, int index){
        result.push_back(current);

        for(int i=index;i<nums.size();i++){
            current.push_back(nums[i]);
            backtrack(result, current, nums, i+1);
            current.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int>current;
        backtrack(result, current, nums, 0);
        return result;
    }
};