import heapq

class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        stones = [-stone for stone in stones]

        heapq.heapify(stones)

        while len(stones) > 1:
            firstStone = -heapq.heappop(stones)
            secondStone = -heapq.heappop(stones)

            if firstStone != secondStone:
                firstStone = secondStone - firstStone
                heapq.heappush(stones, firstStone)

        return -heapq.heappop(stones) if stones else 0

# beats 89.67% runtime and 66.26% memory
# O(nlogn) and O(n)
# https://leetcode.com/problems/last-stone-weight/submissions/1338425697/
