class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_ele = 0, i;
        vector<bool> ans = {};
        for(i=0; i<candies.size(); i++)
        {
            if(candies[i]>max_ele)
                max_ele = candies[i];
        }
        for(i=0; i<candies.size(); i++)
        {
            if ((candies[i]+extraCandies) < max_ele)
                ans.push_back(false);
            else
                ans.push_back(true);
        }
        return ans;
    }
};

// beats 100% runtime and !00% memory
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/1091157188/
