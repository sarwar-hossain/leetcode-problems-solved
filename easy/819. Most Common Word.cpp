class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        unordered_map<string, int> wordCount;
        string word, result;
        int maxCount = 0;

    
        for (char& c : paragraph) {
            c = isalpha(c) ? tolower(c) : ' ';
        }

    
        stringstream ss(paragraph);
        while (ss >> word) {
            if (!bannedSet.count(word)) { 
                wordCount[word]++;
                if (wordCount[word] > maxCount) { 
                    maxCount = wordCount[word];
                    result = word;
                }
            }
        }

        return result;
    }
};