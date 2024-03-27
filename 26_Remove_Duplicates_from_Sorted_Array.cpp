class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j=0;
        for (i=0; i<(nums.size()-1); i++)
        {
            if(nums[i+1] != nums[i])
                nums[j++] = nums[i];
        }
        nums[j++] = nums[i];
        return j;
    }
};


// 7ms and 18.64mb
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1090569738/
