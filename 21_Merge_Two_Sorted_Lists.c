/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    if(list1 == NULL && list2 == NULL)
        return list1;
    if(list1 == NULL)
        return list2;
    if(list2 == NULL)
        return list1;
    struct ListNode* l1 = list1;
    struct ListNode* l2 = list2;
    struct ListNode* ans = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* cur = ans;

    while (l1!=NULL && l2!=NULL)
    {
        if (l1->val <= l2->val)
        {
            struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
            new_node -> next = NULL;
            new_node -> val = l1->val;
            cur -> next = new_node;
            cur = new_node;
            l1 = l1 -> next;
        }
        else if (l1->val > l2->val)
        {
            struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
            new_node -> next = NULL;
            new_node -> val = l2->val;
            cur -> next = new_node;
            cur = new_node;
            l2 = l2 -> next;
        }
    }
    while (l1!=NULL)
    {
        struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node -> next = NULL;
        new_node -> val = l1->val;
        cur -> next = new_node;
        cur = new_node;
        l1 = l1 -> next;
    }
    while (l2!=NULL)
    {
        struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node -> next = NULL;
        new_node -> val = l2->val;
        cur -> next = new_node;
        cur = new_node;
        l2 = l2 -> next;
    }
    return ans->next;
}

// beats 57.86% runtime and 8.47% memory
// https://leetcode.com/problems/merge-two-sorted-lists/submissions/1091930554/
