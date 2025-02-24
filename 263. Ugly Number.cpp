class Solution {
public:
    bool isUgly(int num) {
        if (num <= 0) return false;  // Ugly numbers are positive
        
        // Remove all factors of 2, 3, and 5
        while (num % 2 == 0) num /= 2;
        while (num % 3 == 0) num /= 3;
        while (num % 5 == 0) num /= 5;
        
        // If the remaining number is 1, it's an ugly number
        return num == 1;
    }
};



/*

Example 1:

Input: n = 6
Output: true
Explanation: 6 = 2 × 3
Example 2:

Input: n = 1
Output: true
Explanation: 1 has no prime factors.
Example 3:

Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.


*/