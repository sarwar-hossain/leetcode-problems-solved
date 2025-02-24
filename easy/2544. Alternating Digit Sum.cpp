class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        int flag=0;
        int num=0;
        while(n>0){
            int digit=n%10;
            num=num*10+digit;
            n/=10;
        }
        while(num>0){
            int digit=num%10;
            if(flag%2==0){
                sum+=digit;
            }
            else{
                sum-=digit;
            }
            flag++;
            num/=10;

        }

        return sum;
        
    }
};      