/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    var maxWealth, curMax=0, i, j;
    for ( i=0; i<accounts.length; i++ )
    {
        maxWealth = 0;
        for( j=0; j<accounts[i].length; j++ )
            maxWealth += accounts[i][j];
        if ( maxWealth > curMax )
            curMax = maxWealth;
    }  
    return curMax;
};

// beats 100 memory and 23.02
// https://leetcode.com/problems/richest-customer-wealth/submissions/1088355819/
