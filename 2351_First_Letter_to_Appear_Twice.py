class Solution:
    def repeatedCharacter(self, s: str) -> str:
        charSet = set()
        for character in s:
            if character in charSet:
                return character
            charSet.add(character)

# beats 99.05% runtime and 99.26% memory
# https://leetcode.com/problems/first-letter-to-appear-twice/submissions/1265047740/
