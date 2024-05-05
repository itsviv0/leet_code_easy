# this function returns the count of each of the characters in the string
def getCount(S):
    countDict = dict()
    for char in S:
        countDict[char] = countDict.get(char, 0) + 1
    return countDict

class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s)!=len(t):
            return False
        
        if getCount(s) == getCount(t):
            return True
        else:
            return False

# beat 95.66% runtime and 56.13% memory
# https://leetcode.com/problems/valid-anagram/submissions/1216491974/
