class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num!=0)
        {
            if (num%2 == 0)
                num = num/2;
            else
                num = num-1;
            count++;
        }
        return count;
    }
};

// beats 44.12% time and 100% space
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/submissions/1074337075/
