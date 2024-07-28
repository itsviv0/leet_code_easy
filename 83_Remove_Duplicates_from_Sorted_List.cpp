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
 
// approach 1
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) 
            return head;
        ListNode* cur = head->next;
        ListNode* prev = head;
        while (cur!=NULL) {
            if (prev->val == cur->val)
                prev->next = cur->next;
            else
                prev = cur;
            cur = cur->next;
        }
        return head;
    }
};

// beats 85.76% runtime and 20.90% memory
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/1333017207/


//approach 2
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) 
            return head;
        ListNode* cur = head->next;
        ListNode* prev = head;
        while (cur!=NULL) {
            if (prev->val == cur->val)
                prev->next = cur->next;
            else
                prev = cur;
            cur = cur->next;
        }
        return head;
    }
};

// beats 51.60% runtime and 27.75% memory
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/1332980713/
