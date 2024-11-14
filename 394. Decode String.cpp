#include<iostream>
//2


class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack; 
    stack<string> resultStack; 
    string currentString = "";
    int k = 0; 

    for (char ch : s) {
        if (isdigit(ch)) {
            k = k * 10 + (ch - '0');
        } else if (ch == '[') {
            countStack.push(k);
            resultStack.push(currentString);
            
            currentString = "";
            k = 0;
        } else if (ch == ']') {
            
            int repeatCount = countStack.top();
            countStack.pop();
            string temp = resultStack.top();
            resultStack.pop();

            for (int i = 0; i < repeatCount; ++i) {
                temp += currentString;
            }
            currentString = temp; 
        } else {
           
            currentString += ch;
        }
    }
    return currentString;
    }
};