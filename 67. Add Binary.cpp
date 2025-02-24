class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        string r="";

        while(i>=0 || j>=0 || carry>0){
            int sum=carry;

            if(i>=0){
                sum+=a[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=b[j]-'0';
                j--;
            }
            
            r+=(sum%2)+'0';
            carry=sum/2;

        }

        reverse(r.begin(), r.end());

        return r;
        
    }
};