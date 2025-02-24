class Solution {
public:
    string convertToBase7(int num) {
        if(num==0){
            return "0";
        }

        bool ne=num<0;

        num=abs(num);

        string  base7="";

        while(num>0){
            int r=num%7;
            base7+=to_string(r);
            num=num/7;
        }

        reverse(base7.begin(), base7.end());

        if(ne){
            base7="-"+base7;
        }

        return base7;
    }
};