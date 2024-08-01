class Solution:
    def removeDuplicates(self, s: str) -> str:
        stk = []
        for character in s:
            if stk and character == stk[-1]:
                stk.pop()
            else:
                stk.append(character)

        return ''.join(stk)

# beats 72.35% runtime and 85.78% memory
# O(n) 
# https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/1338575245/
