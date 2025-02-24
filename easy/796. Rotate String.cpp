class Solution {
public:
    bool rotateString(string s, string goal) {
        int  n=s.length(), m=goal.length();
        if(n!=m){
            return false;
        }

        s=s+s;
        n=n+n;
        for(int i=0;i<n;i++){
            string subs = s.substr(i,m);
            if(subs==goal){
                return true;
            }
        }
        return false;
    }
};