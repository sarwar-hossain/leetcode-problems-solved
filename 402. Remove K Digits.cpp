#include<iostream>
//2


// method 1:


class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
    
        string result="";
        if(k>=n){
            return "0";
        }

        for(char c : num){
            while(k>0 && !result.empty() && result.back()>c){
               result.pop_back();
                k--;
            }
            result.push_back(c);
        }
        
        while(k>0 && !result.empty()){
            result.pop_back();
            k--;
        }

        
        while(!result.empty() && result[0]=='0'){
            result.erase(result.begin());
        }

        return result.empty()?"0":result;


    }
};



// method 2:

#include <iostream>
#include <string>
#include <stack>

std::string removeKdigits(std::string num, int k) {
    std::stack<char> stk;
    // Edge case where all digits need to be removed
    if (k >= num.size()) return "0";

    for (char digit : num) {
        // Pop from the stack while the digit at the top is greater
        // than the current digit and we still need to remove characters
        while (!stk.empty() && k > 0 && stk.top() > digit) {
            stk.pop();
            k--;
        }
        stk.push(digit);
    }

    // Remove remaining characters if k > 0
    while (k > 0 && !stk.empty()) {
        stk.pop();
        k--;
    }

    // Collect the result
    std::string result = "";
    while (!stk.empty()) {
        result = stk.top() + result;
        stk.pop();
    }

    // Remove leading zeros
    while (!result.empty() && result[0] == '0') {
        result.erase(result.begin());
    }

    // If the result is empty, return "0"
    return result.empty() ? "0" : result;
}

int main() {
    std::string num = "1432219";
    int k = 3;
    std::cout << "Result: " << removeKdigits(num, k) << std::endl; // Output: "1219"

    return 0;
}
