class Solution:
    def isBoomerang(self, points: List[List[int]]) -> bool:
        (x1, y1), (x2, y2), (x3, y3) = points
        return (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) != 0
        
# beats 41.22% runtime and 93.73% memory
# O(1)
# https://leetcode.com/problems/valid-boomerang/submissions/1338334244/
