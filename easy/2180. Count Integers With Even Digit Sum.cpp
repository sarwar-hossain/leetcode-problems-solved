class Solution {
    private:
    int sumDigit(int n){
         int sum=0;
         while(n>0){
            int digit=n%10;
            sum+=digit;
            n/=10;
         }
         return sum;
    }
public:
    int countEven(int num) {
        int count=0;

        for(int i=2;i<=num;i++){
            if(sumDigit(i)%2==0){
                count++;
            }
        }

        return count;
    }
};