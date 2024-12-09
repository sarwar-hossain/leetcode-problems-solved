class Solution {
     private:
    bool hasCycle(int course, vector<vector<int>> &graph, vector<int> &visited, stack<int>&topoorder){
        if(visited[course]==1) return false;
        
        if(visited[course]==2) return true;

        visited[course]=1;

        for(int neighbor:graph[course]){
           if(!hasCycle(neighbor, graph, visited, topoorder)){
            return false;
           }
        }

        visited[course]=2;

        topoorder.push(course);

        return true;
    }
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
           vector<vector<int>> graph(numCourses);
           stack<int>topoorder;
           vector<int>result;

        for(const auto& prereq : prerequisites){
            graph[prereq[1]].push_back(prereq[0]);
        }

        vector<int>visited(numCourses);

        for(int i=0;i<numCourses;i++){
              if(visited[i]==0){
                if(!hasCycle(i, graph, visited, topoorder)){
                    return {};
                }
              }
        }

        while(!topoorder.empty()){
            result.push_back(topoorder.top());
            topoorder.pop();
        }

        return result;

    }
};