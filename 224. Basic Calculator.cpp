#include<iostream>
//3

class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        int result=0;
        int number=0;
        int sign=1;

        for(char c:s){
            if(isdigit(c)){
                number=number*10+(c-'0');
               
            }
            else if(c=='+'){
                result+=number*sign;
                number=0;
                sign=1;
            }
            else if(c=='-'){
                result+=number*sign;
                number=0;
                sign=-1;
            }
            else if(c=='('){
                st.push(result);
                st.push(sign);
                result=0;
                sign=1;
            }
            else if(c==')'){
                result+=sign*number;
                result*=st.top();
                st.pop();
                result+=st.top();
                st.pop();
                number=0;
            }
        }

        result+=number*sign;

        return result;
    }
};