class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n=points.size();
        int result;

        if(n<=1){
            return 0;
        }

        for(int i=1;i<n;i++){
            int x1=points[i-1][0], y1=points[i-1][1];
            int x2=points[i][0], y2=points[i][1];

            result+=max(abs(x1-x2), abs(y1-y2));
        }

        return result;
    }
};