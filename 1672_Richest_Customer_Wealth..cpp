class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth, curMax=0, i, j;
        for ( i=0; i<accounts.size(); i++ )
        {
            maxWealth = 0;
            for( j=0; j<accounts[i].size(); j++ )
                maxWealth += accounts[i][j];
            if ( maxWealth > curMax )
                curMax = maxWealth;
        }  
        return curMax;
    }
};

// beats 78.72% runtime and 100% memory
// https://leetcode.com/problems/richest-customer-wealth/submissions/1088353113/
