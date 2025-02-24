class Solution {
public:
    bool isIsomorphic(string s, string t) {
           if (s.size() != t.size()) return false;

        unordered_map<char, char> sToT;
        unordered_set<char> mappedChars;

        for (int i = 0; i < s.size(); i++) {
            char sChar = s[i];
            char tChar = t[i];

            if (sToT.find(sChar) != sToT.end()) {
               
                if (sToT[sChar] != tChar) return false;
            } else {
            
                if (mappedChars.find(tChar) != mappedChars.end()) return false;

                sToT[sChar] = tChar;
                mappedChars.insert(tChar);
            }
        }

        return true;
    }
};