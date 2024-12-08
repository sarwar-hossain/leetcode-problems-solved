//2





class Solution {
    private:
    bool hasCycle(int course, vector<vector<int>> &graph, vector<int> &visited){
        if(visited[course]==1) return true;
        
        if(visited[course]==2) return false;

        visited[course]=1;

        for(int neighbor:graph[course]){
           if( hasCycle(neighbor, graph, visited)){
            return true;
           }
        }

        visited[course]=2;

        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);

        for(const auto& prereq : prerequisites){
            graph[prereq[1]].push_back(prereq[0]);
        }

        vector<int>visited(numCourses);

        for(int i=0;i<numCourses;i++){
              if(visited[i]==0){
                if(hasCycle(i, graph, visited)){
                    return false;
                }
              }
        }

        return true;
    }
};