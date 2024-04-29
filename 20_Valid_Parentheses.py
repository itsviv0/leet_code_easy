class Solution:
    def isValid(self, s: str) -> bool:
        ans = []
        if len(s) == 1:
            return 0
        for bracket in s:
            if bracket == '[' or bracket == '(' or bracket == '{':
                ans.append(bracket)
            elif not len(ans):
                return 0
            elif len(ans):
                if bracket == ']' and ans[-1] == '[':
                    ans.pop()
                elif bracket == '}' and ans[-1] == '{':
                    ans.pop()
                elif bracket == ')' and ans[-1] == '(':
                    ans.pop()
                else:
                    return 0
        if ans:
            return 0
        return 1            

# beats 99.87% memory and 94.14% runtime
# https://leetcode.com/problems/valid-parentheses/submissions/1091899561/
