class Solution {
    private:
    bool checkZero(int num){
        while(num>0){
            if(num%10==0){
                return true;
            }
            num/=10;
        }
        return false;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int j=n-i;
            if(!checkZero(i) && !checkZero(j)){
                return {i, j};
            }
        }
        return {};
    }
};