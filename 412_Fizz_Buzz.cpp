class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        string ele;
        for (int i=1; i<=n; i++)
        {
            if ( i%3==0 && i%5==0)
                ele = "FizzBuzz";
            else if ( i%3==0 )
                ele = "Fizz";
            else if ( i%5==0 )
                ele = "Buzz";
            else 
                ele = to_string(i);
            ans.push_back(ele);
        } 
        return ans;
    }
};

// beats 100% runtime and 99.98% memory
// https://leetcode.com/problems/fizz-buzz/submissions/1088947340/
