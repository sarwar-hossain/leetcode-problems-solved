//2

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
          vector<int> values;
    stack<int> st;
    ListNode* current = head;

    // Extract values from the linked list into a vector
    while (current) {
        values.push_back(current->val);
        current = current->next;
    }

    // Initialize result vector with 0s
    vector<int> result(values.size(), 0);

    // Process each value to find the next greater node
    for (int i = 0; i < values.size(); ++i) {
        // Check for next greater element
        while (!st.empty() && values[st.top()] < values[i]) {
            result[st.top()] = values[i];
            st.pop();
        }
        // Push current index onto the stack
        st.push(i);
    }

    return result;
    }
};