class Solution {
public:
    int mySqrt(int x) {
        int low=1, high=x;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        return high;
    }
};