class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandie=0;
        int n=candies.size();
        for(int i=0;i<n;i++){
            maxCandie=max(maxCandie, candies[i]);
        }

        vector<bool>result;

        for(int i=0;i<n;i++){
           if(candies[i]+extraCandies>=maxCandie){
            result.push_back(true);
           }
           else{
            result.push_back(false);
           }
        }

        return result;
    }
};       