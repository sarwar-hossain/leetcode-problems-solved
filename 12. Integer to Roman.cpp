#include<iostream>
//2


class Solution {
public:
   string intToRoman(int num) {
        // Define the integer values and corresponding Roman numeral symbols
       vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
       vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
       string result;
        
        // Iterate through each value and symbol
        for (int i = 0; i < values.size(); ++i) {
            // While the current value can be subtracted from num, add the corresponding symbol
            while (num >= values[i]) {
                num -= values[i];
                result += symbols[i];
            }
        }
        
        return result;
    }
};