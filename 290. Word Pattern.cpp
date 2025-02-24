class Solution {
public:
    bool wordPattern(string pattern, string s) {
       vector<string>words;
       string word;
       stringstream ss(s);

       while(ss >> word){
             words.push_back(word);
       }

        if(pattern.size()!=words.size()){
        return false;
       }

       unordered_map<char, string>chtost;
       unordered_map<string, char>sttoch;

       for(int i=0;i<pattern.size();i++){
            char c=pattern[i];
            string w=words[i];

            if(chtost.count(c)){
                if(chtost[c]!=w){
                    return false;
                }
            }
            else{
                chtost[c]=w;
            }

               if(sttoch.count(w)){
                if(sttoch[w]!=c){
                    return false;
                }
            }
            else{
                sttoch[w]=c;
            }
       }

       return true;
    }
};




/*


Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. Specifically:

Each letter in pattern maps to exactly one unique word in s.
Each unique word in s maps to exactly one letter in pattern.
No two letters map to the same word, and no two words map to the same letter.
 

Example 1:

Input: pattern = "abba", s = "dog cat cat dog"

Output: true

Explanation:

The bijection can be established as:

'a' maps to "dog".
'b' maps to "cat".
Example 2:

Input: pattern = "abba", s = "dog cat cat fish"

Output: false

Example 3:

Input: pattern = "aaaa", s = "dog cat cat dog"

Output: fals



*/