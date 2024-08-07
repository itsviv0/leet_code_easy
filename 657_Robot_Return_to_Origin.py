class Solution:
    def judgeCircle(self, moves: str) -> bool:
        x, y = 0, 0
        for move in moves:
            if move == 'R':
                x += 1
            elif move == 'L':
                x -= 1
            elif move == 'U':
                y += 1
            elif move == 'D':
                y -= 1
        
        return (x, y) == (0, 0)

# beats 52.76% runtime and 99.12% memory
# O(n) 
# https://leetcode.com/problems/robot-return-to-origin/submissions/1337442166/
