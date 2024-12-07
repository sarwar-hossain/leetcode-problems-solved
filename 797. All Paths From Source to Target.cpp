//2




class Solution {
    private:
    void allPaths(vector<vector<int>> &graph, int  current, int target, vector<int> &path, vector<vector<int>> &allPath){
        path.push_back(current);

        if(current==target){
            allPath.push_back(path);
        }
        else{
            for(int neighbor : graph[current]){
                allPaths(graph, neighbor, target, path, allPath);
            }
        }

        path.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>>allPath;
        vector<int>path;
        allPaths(graph, 0, n-1, path, allPath);

        return allPath;
    }
};