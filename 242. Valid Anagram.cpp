class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> count(26, 0);

        for (char c : s) {
            count[c - 'a']++;
        }
        
        for (char c : t) {
            count[c - 'a']--;
            if (count[c - 'a'] < 0) return false;
        }
        
        return true;
    }
};





class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),  s.end());
        sort(t.begin(), t.end());

        return s==t;
    }
};



/*

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false


*/