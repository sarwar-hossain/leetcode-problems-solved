#include<iostream>
//2




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        // Base case: If the list is empty or has only one node
        if (head == NULL || head->next == NULL) return head;

        // Step 1: Split the list into two halves
        ListNode* mid = findMiddle(head);
        ListNode* rightHalf = mid->next;
        mid->next = NULL;

        // Step 2: Recursively sort each half
        ListNode* left = sortList(head);
        ListNode* right = sortList(rightHalf);

        // Step 3: Merge the sorted halves
        return merge(left, right);
    }

private:
    // Helper function to find the middle of the list
    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    // Helper function to merge two sorted lists
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        // Append the remaining nodes of the non-empty list
        tail->next = (l1 != NULL) ? l1 : l2;

        return dummy.next;
    }
};
