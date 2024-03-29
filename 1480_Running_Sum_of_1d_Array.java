import java.util.Arrays;
class Solution {
    public int[] runningSum(int[] nums) {
        int n = nums.length;
        int[] answer = new int[n];
        int i, sum =0;
        for (i=0; i<n; i++)
        {
            sum += nums[i];
            answer[i] = sum;
        }
        return answer;
    }
}

// beats 100% time and 99.99% space
// https://leetcode.com/problems/running-sum-of-1d-array/submissions/979415618/
