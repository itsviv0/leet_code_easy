class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        target = []
        length = len(nums)
        for indx in range(length):
            target.insert(index[indx], nums[indx])

        return target

# beats 100% memory and 22.93% runtime
# https://leetcode.com/problems/create-target-array-in-the-given-order/submissions/1091853365/
