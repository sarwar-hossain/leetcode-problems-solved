#include<iostream>


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char, int>um;

       for(char i : magazine){
        um[i]++;
       }

       for(char i : ransomNote){
           if(um[i]<=0){
            return false;
           }

           um[i]--;
       }

       return true;

    }
};

   

