class Solution {
public:
    int maxPower(string s) {
        int i, j, count = 0, max_count = 0;
        for (i=0; i<(s.length()-1); i++)
        {
            if (s[i] == s[i+1])
                count++;
            else
                count = 0;
            max_count = max(count, max_count);
        }
        return max_count + 1 ;
    }
};

// beats 100% runtime and 100% memeory
// https://leetcode.com/problems/consecutive-characters/submissions/1091163457/
