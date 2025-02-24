class Solution {
public:
    int findLHS(vector<int>& nums) {
           unordered_map<int, int> freqMap; 

        for (int num : nums) {
            freqMap[num]++;
        }

        int maxLength = 0;

        for (auto& [key, value] : freqMap) {
            if (freqMap.count(key + 1)) { 
                maxLength = max(maxLength, value + freqMap[key + 1]);
            }
        }

        return maxLength;
    }
};