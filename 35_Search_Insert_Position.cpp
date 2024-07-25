class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        for (i=0; i<nums.size(); i++) {
            if (nums[i]==target)
                return i;
            if (nums[i] > target)
                break;
        }
        return i;
    }
};

// beats 71.37% runtime and 17.56% memory
// https://leetcode.com/problems/search-insert-position/submissions/1333248076/
