//2




class Solution {
public:
    bool checkValidString(string s) {
        int minopen=0, maxopen=0;

        for(char c : s){
            if(c=='('){
                minopen++;
                maxopen++;
            }
            else if(c==')'){
                minopen=max(0, minopen-1);
                maxopen--;
            }
            else if(c=='*'){
                minopen=max(0, minopen-1);
                maxopen++;
            }

              if(maxopen<0){
            return false;
        }
        }

      

        return minopen==0;
    }
};