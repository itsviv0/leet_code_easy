class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (auto num:nums)
            ans ^= num;
        return ans;
    }
};

// beats 88.01% runtime and 98.96% memory
// O(n) and O(1)
// https://leetcode.com/problems/single-number/submissions/1266511395/
