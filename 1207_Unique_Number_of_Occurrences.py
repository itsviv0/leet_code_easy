class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        freqDict = dict()
        for num in arr:
            freqDict[num] = freqDict.get(num, 0) + 1
        
        freqSet = set()
        for _, value in freqDict.items():
            if value in freqSet:
                return False
            freqSet.add(value)
        
        return True

# beats 52.50% runtime and 49.33% memory
# O(n)
# https://leetcode.com/problems/unique-number-of-occurrences/submissions/1339754389/
