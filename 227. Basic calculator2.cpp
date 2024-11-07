#include<iostream>
//2

class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int currentNumber = 0;
        char operation = '+'; // The previous operator
        int result = 0;
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            char c = s[i];
            if (isdigit(c)) {
                currentNumber = currentNumber * 10 + (c - '0');
            }
            // If the character is an operator or the last character in the string
            if (!isdigit(c) && !isspace(c) || i == n - 1) {
                if (operation == '+') {
                    st.push(currentNumber);
                } else if (operation == '-') {
                    st.push(-currentNumber);
                } else if (operation == '*') {
                    int top = st.top();
                    st.pop();
                    st.push(top * currentNumber);
                } else if (operation == '/') {
                    int top = st.top();
                    st.pop();
                    st.push(top / currentNumber);
                }
                // Update the operation and reset currentNumber
                operation = c;
                currentNumber = 0;
            }
        }

        // Sum up the values in the stack to get the result
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        return result;
    }
};