class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
                if(nums[i]+nums[j] == target)
                    return {i,j};
        }
        return {};
    }
};

// beats 30.79% runtime and 73.53% memory
// https://leetcode.com/problems/two-sum/submissions/1221320417/
