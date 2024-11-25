//1



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