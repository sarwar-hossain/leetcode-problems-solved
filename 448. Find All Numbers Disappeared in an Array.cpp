class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> hashSet(nums.begin(), nums.end()); 
        vector<int> missingNumbers;

       
        for (int i = 1; i <= nums.size(); ++i) {
            if (hashSet.find(i) == hashSet.end()) {
                missingNumbers.push_back(i);
            }
        }

        return missingNumbers;
    }
};