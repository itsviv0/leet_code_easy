class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashDict = dict()
        for num in nums:
            hashDict[num] = nums.index(num)
            
        for i in range(len(nums)):
            rem = target-nums[i]

            if rem in hashDict and hashDict[rem] != i:
                return [i, nums.index(rem)]
        
        return []

# beats 39.13% runtime and 16.24% memory
# https://leetcode.com/problems/two-sum/submissions/1221332929/
