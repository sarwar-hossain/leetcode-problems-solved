class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        int yTangent=coordinates[1][1]-coordinates[0][1];
        int xTangent=coordinates[1][0]-coordinates[0][0];
        

        for(int i=2;i<n;i++){
             int y=coordinates[i][1]-coordinates[0][1];
             int x=coordinates[i][0]-coordinates[0][0];
             
             if(yTangent*x!=xTangent*y){
                return false;
             }
        }

        return true;

    }
};