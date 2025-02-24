class Solution {
    private:
    bool checkVowels(char ch){
          if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='o'||ch=='O'||ch=='i'||ch=='I'||ch=='u'||ch=='U'){
            return true;
          }
          return false;
    }
public:
    string reverseVowels(string s) {
        int l=0, r=s.size()-1;

        while(l<=r){
            if(checkVowels(s[l]) && checkVowels(s[r])){
                swap(s[l], s[r]);
                l++;
                r--;
            }
            else if(checkVowels(s[l])){
                  r--;
            }else if(checkVowels(s[r])){
                l++;
            }
            else{
                r--;
                l++;
            }
        }
        return s;
    }
};



/*

Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"



*/