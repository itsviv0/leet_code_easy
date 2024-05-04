class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        noDuplicates = set()
        for num in nums:
            if num not in noDuplicates:
                noDuplicates.add(num)
            else:
                return True
        return False

# beats 91.48% runtime and 66.68% memory
# https://leetcode.com/problems/contains-duplicate/submissions/1215447004/
