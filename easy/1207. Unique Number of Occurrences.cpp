class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> um;

        for(int num : arr){
            um[num]++;
        }

        unordered_set<int>set;
        for(auto val : um){
            if(set.count(val.second)){
                return false;
            }
            set.insert(val.second);
        }

        return true;
    }
};