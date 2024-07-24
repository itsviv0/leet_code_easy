class Solution:
    def canMakeSquare(self, grid: List[List[str]]) -> bool:
        # 4 possible grids
        grid1 = [grid[0][0], grid[0][1], grid[1][0], grid[1][1]]
        grid2 = [grid[0][2], grid[0][1], grid[1][2], grid[1][1]]
        grid3 = [grid[1][0], grid[2][0], grid[2][1], grid[1][1]]
        grid4 = [grid[2][2], grid[2][1], grid[1][2], grid[1][1]]

        if grid1.count("B") >=3 or grid1.count("W") >=3:
            return True
        
        if grid2.count("B") >=3 or grid2.count("W") >=3:
            return True

        if grid3.count("B") >=3 or grid3.count("W") >=3:
            return True
        
        if grid4.count("B") >=3 or grid4.count("W") >=3:
            return True
        
        return False

# beats 89.73% runtime and 20.55% memory
# https://leetcode.com/problems/make-a-square-with-the-same-color/submissions/1264881455/
