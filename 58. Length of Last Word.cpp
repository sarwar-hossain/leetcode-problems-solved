

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        stack<string>st;
        string word;

        while(ss >> word){
           st.push(word);
        }

        return st.top().length();
    }
};



stringstream ss(s);
stack<string> st;
string word;

while(ss >> word){
    st.push(word);
}



