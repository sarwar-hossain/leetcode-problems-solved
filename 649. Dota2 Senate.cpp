//2



class Solution {
public:
    string predictPartyVictory(string senate) {
       queue<int>radiant, dire;

       for(int i=0;i<senate.size();i++){
          if(senate[i]=='D'){
            dire.push(i);
          }
          else{
            radiant.push(i);
          }
       }

       while(!radiant.empty() && !dire.empty()){
        int r=radiant.front();
        int d=dire.front();
        radiant.pop();
        dire.pop();

        if(r<d){
            radiant.push(r+senate.size());
        }
        else{
            dire.push(d+senate.size());
        }
       }

       return radiant.empty()?"Dire":"Radiant";
    }
};