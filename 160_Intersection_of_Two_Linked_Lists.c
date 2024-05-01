/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *h1 = headA;
    struct ListNode *h2 = headB;
    struct ListNode *cur;

    while (h1!=h2)
    {
        if (h1!=NULL)
            h1 = h1->next;
        else
            h1 = headB;
        if (h2!=NULL)
            h2 = h2->next;
        else
            h2 = headA;
    }
    return h1;
}

// beats 71.54% runtime and 22.61% memory
// https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/1091964360/
