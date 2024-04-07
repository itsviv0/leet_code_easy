class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0;
        vector<int>::iterator it = nums.begin();
        for (int i=0; i<nums.size(); i++)
        {
            if (val != nums[i])
                nums[index++] = nums[i];
        }
        return index;
    }
};

// beats 100% runtime and 100% memory
// https://leetcode.com/problems/remove-element/submissions/1090560402/
