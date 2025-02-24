class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freqMap; 
        vector<int> result;

       
        for (int num : nums1) {
            freqMap[num]++;
        }

       
        for (int num : nums2) {
            if (freqMap[num] > 0) { 
                result.push_back(num);
                freqMap[num]--; 
            }
        }

        return result;
    }
};






class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result1;
          vector<int> result2;
        
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

         for(int num : nums1){
            if(!set2.count(num)){
                result1.push_back(num);
            }
        }

          for(int num : nums2){
            if(!set1.count(num)){
                result2.push_back(num);
            }
        }

       

       return {result1, result2};

    }
};