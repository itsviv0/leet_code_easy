/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* one_jump = head;
    struct ListNode* two_jump = head;
    while ( two_jump && two_jump->next )
    {
        two_jump = two_jump -> next -> next;
        one_jump = one_jump -> next;
    }
    return one_jump;
}

// beats 26.52% memory and 100% runtime
// https://leetcode.com/problems/middle-of-the-linked-list/submissions/1088979690/
