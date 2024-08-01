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
    ListNode* removeElements(ListNode* head, int val) {
        // remove all the nodes until the val is found in head
        while (head!=NULL && head->val == val)
            head = head->next;

        if (head == NULL)
            return head;
            
        ListNode* cur = head;

        while (cur!=NULL && cur->next!=NULL) {
            if (cur->next->val == val) 
                cur->next = cur->next->next;
            else
            // update the next node only if duplicate is not found
            // if duplicate is found then the node will be deleted
                cur = cur->next;
        }

        return head;
    }
};

// beats 59.64% runtime and 27.11% memory
// O(n)
// https://leetcode.com/problems/remove-linked-list-elements/submissions/1333655785/
