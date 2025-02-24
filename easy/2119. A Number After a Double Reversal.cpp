class Solution {
public:
    bool isSameAfterReversals(int num) {
        int reversing1=0;
        int orginalNum=num;
        while(num>0){
            int digit=num%10;
            reversing1=reversing1*10+digit;
            num/=10;
        }
        int reversing2=0;

        while(reversing1>0){
            int digit=reversing1%10;
            reversing2=reversing2*10+digit;
            reversing1/=10;

        }

        if(orginalNum==reversing2){
            return true;
        }

        return false;
        
             
    }
};    