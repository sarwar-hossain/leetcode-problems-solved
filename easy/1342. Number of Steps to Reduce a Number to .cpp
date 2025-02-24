class Solution {
public:
    int numberOfSteps(int num) {
        int result=0;
      
        while(num>0){
            if(num%2!=0){
                num-=1;
                result++;
            }
            else{
                num/=2;
                result++;
            }
        }
        return result;
    }
};