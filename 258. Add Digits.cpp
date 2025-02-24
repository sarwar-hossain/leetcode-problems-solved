class Solution {
private:
    int sumDigits(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10; // Add the last digit of n
            n /= 10; // Remove the last digit
        }
        return sum;
    }

public:
    int addDigits(int num) {
        while (num >= 10) {  // While num has more than one digit
            num = sumDigits(num);  // Sum the digits of num
        }
        return num;  // Return the single-digit result
    }
};


/*


Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0

*/