#include<iostream>
//2




/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    unordered_map<Node*, Node*>visited;
public:
    Node* cloneGraph(Node* node) {
        if(!node){
            return nullptr;
        }

        if(visited.find(node)!=visited.end()){
            return visited[node];
        }

        Node* clone= new Node(node->val);
        visited[node]=clone;

        for(Node* i:node->neighbors){
            clone->neighbors.push_back(cloneGraph(i));
        }
         
         return clone;

    }
};