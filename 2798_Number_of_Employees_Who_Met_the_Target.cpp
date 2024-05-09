class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for (int i=0; i<hours.size(); i++)
        {
            if (hours[i] >= target)
                count++;
        }
        return count;
    }
};

// beats 39.15% runtime and 99.57% memory
// https://leetcode.com/problems/number-of-employees-who-met-the-target/submissions/1223174596/
