class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        count = 0
        for s in jewels:
            if s in stones:
                count += stones.count(s)
            
        return count

# beats 30.34% runtime and 9.27% memory
# https://leetcode.com/problems/jewels-and-stones/submissions/1248417257/
