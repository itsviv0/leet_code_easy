/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool checkTree(TreeNode* root) {
        struct TreeNode *tmp1 = root -> left;
        struct TreeNode *tmp2 = root -> right;
        if((tmp1 -> val + tmp2 -> val) == root -> val)
            return true;
        else
            return false;
    }
};

// 3ms and 12.44mb (beats 100%)
// https://leetcode.com/problems/root-equals-sum-of-children/submissions/882618418/
