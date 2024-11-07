#include<iostream>
//2


class Solution {
public:

:

    string multiply(string num1, string num2) {
         if (num1 == "0" || num2 == "0") {
            return "0"; 
        }

        int l = num1.size();
        int r = num2.size();
        vector<int> result(l + r, 0); 

       
        for (int i = l - 1; i >= 0; i--) {
            for (int j = r - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10; 
                result[i + j] += sum / 10;    
            }
        }

        
        string product = "";
        for (int num : result) {
            if (!(product.empty() && num == 0)) { 
                product += to_string(num);
            }
        }

        return product;
    }
     

//Some of string:

 string addStrings(const string& num1, const string& num2) {
        int carry = 0;
        int i = num1.size() - 1, j = num2.size() - 1;
        string result;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';
            result += (sum % 10) + '0';
            carry = sum / 10;
        }

        reverse(result.begin(), result.end());
        return result;
    }




};