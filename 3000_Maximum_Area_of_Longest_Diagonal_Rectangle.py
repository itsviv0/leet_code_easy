class Solution:
    def areaOfMaxDiagonal(self, dimensions: List[List[int]]) -> int:
        maxDiag = 0
        maxArea = 0
        for length, breadth in dimensions:
            # find the max diagonal using the pythagorean rule for triangles
            if maxDiag < (length**2 + breadth**2):
                maxDiag = (length**2 + breadth**2)
                # update the area for that reactangle that has larger diagonal
                maxArea = length*breadth
            elif (length**2 + breadth**2) == maxDiag:
                # there can be rectangles of different area with the same diagonal
                # so store the max area according to the lenght and breadth
                maxArea = max(maxArea, length*breadth)
            
        return maxArea

# beats 71.16% runtime and 37.65% memory
# O(n)
# https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/submissions/1258657095/
