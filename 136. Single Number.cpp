class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> um;
        for(int num : nums){
            um[num]++;
        }

        for(const auto& pair : um){
            if(pair.second==1){
                return pair.first;
            }
        }

        return 0;
    }
};