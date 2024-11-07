#include<iostream>
//2



class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==1 || numRows>=n){
            return s;
        }

        vector<string> v(min(numRows, n));
        int count=0;
        int flag=0;

        for(char c:s){
            v[count]+=c;
            if(count==0){
                flag=1;
            }
            else if(count==numRows-1){
                flag=0;
            }

            if(flag==1){
                count++;
            }
            else{
                count--;
            }
        }

        string result="";
        for(int i=0;i<v.size();i++){
            result+=v[i];
        }

        return result;
    }
};