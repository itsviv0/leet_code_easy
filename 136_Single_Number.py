class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ans = 0
        for num in nums:
            ans ^= num
        return ans
        
# beats 76.69% runtime and 48.74% memory
# O(n) and O(1)
# https://leetcode.com/problems/single-number/submissions/1266508462/
