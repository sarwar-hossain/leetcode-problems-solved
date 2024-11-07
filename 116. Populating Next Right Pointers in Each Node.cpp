#include<iostream>
//2




/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node* current=root;

         while (current != nullptr && current->left != nullptr) {
            Node* level=current;

            while(level!=nullptr){
                level->left->next=level->right;
                if(level->next!=nullptr){
                    level->right->next=level->next->left;
                }
                level=level->next;
            }
            current=current->left;
        }
     
       return root;
    }
};