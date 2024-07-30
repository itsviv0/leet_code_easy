from typing import List

class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        numSet = set()
        duplicate = 0
        actualSum = 0
        
        for num in nums:
            actualSum += num
            if num in numSet:
                duplicate = num
            else:
                numSet.add(num)

        n = len(nums)
        expectedSum = n * (n + 1) // 2
        missing = expectedSum - (actualSum - duplicate)

        return [duplicate, missing]
        
# beats 89.95% runtime and 9.11% memory
# O(n)
# https://leetcode.com/problems/set-mismatch/submissions/1337519623/
