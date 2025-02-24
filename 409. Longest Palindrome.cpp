class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,  int>um;

        for(int i=0;i<s.size();i++){
            um[s[i]]++;
        }

        int result=0;
        bool flag=0;

        for(const auto& i : um){
            if(i.second%2==0){
                result+=i.second;
            }
            else{
                result+=i.second-1;
                flag=1;
            }
        }

        if(flag==1){
            result++;
        }

        return result;

    }
};


/*


Given a string s which consists of lowercase or uppercase letters, return the length of the longest 
palindrome
 that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.


*/