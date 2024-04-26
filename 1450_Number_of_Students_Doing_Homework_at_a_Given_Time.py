class Solution:
    def busyStudent(self, startTime: List[int], endTime: List[int], queryTime: int) -> int:
        students_doing_hw_at_queryTime = 0
        for i in range(len(startTime)):
            if startTime[i]<=queryTime and endTime[i]>=queryTime:
                students_doing_hw_at_queryTime = students_doing_hw_at_queryTime + 1

        return students_doing_hw_at_queryTime

# beats 99.64% runtime and 99.76% memory
# https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/submissions/1091169116/
