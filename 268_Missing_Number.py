class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        sumOfNums = n * (n+1) / 2

        for num in nums:
            sumOfNums -= num

        return int(sumOfNums)
        
# beats 87.052% runtime and 18.56% memory
# https://leetcode.com/problems/missing-number/submissions/1336236828/
