class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False
        
        return goal in (s+s)

# beats 89.04% runtime and 60.00% memory
# O(n) 
# https://leetcode.com/problems/rotate-string/submissions/1339817165/
