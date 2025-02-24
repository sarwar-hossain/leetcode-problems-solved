class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result=0;
        int n=gain.size();
        int curr=0;

        for(int i=0;i<n;i++){
            curr=curr+gain[i];
            result=max(result, curr);
        }

        return result;

    }
};