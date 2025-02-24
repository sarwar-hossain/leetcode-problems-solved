class Solution {
public:

    int getsum(int n){
            int sum=0;
            while(n>0){
                int d=n%10;
                sum+=d*d;
                n=n/10;
            }
            return sum;
        }

    bool isHappy(int n) {
      int  slow=n;
       int fast=getsum(n);

       while(fast!=1 && fast!=slow){
          slow=getsum(slow);
          fast=getsum(getsum(fast));
       }
        
        return fast==1;
        
    }
};