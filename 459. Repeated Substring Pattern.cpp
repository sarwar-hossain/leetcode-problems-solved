class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         int n = s.size();
    for (int len = 1; len <= n / 2; ++len) {
        if (n % len == 0) { 
            string pattern = s.substr(0, len);
            string repeatedPattern = "";
            for (int i = 0; i < n / len; ++i) {
                repeatedPattern += pattern;
            }
            if (repeatedPattern == s) return true;
        }
    }
    return false;
    }
};