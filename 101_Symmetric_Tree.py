# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        
        def checkSym(rootLeft, rootRight):
            if rootLeft==None and rootRight==None:
                return True
            elif rootLeft==None or rootRight==None:
                return False
            elif rootLeft.val != rootRight.val:
                return False
            return checkSym(rootLeft.left, rootRight.right) and checkSym(rootLeft.right, rootRight.left)
        
        return checkSym(root.left, root.right)

# beats 34.76% runtime and 40.66% memory
# https://leetcode.com/problems/symmetric-tree/submissions/1240792727/
