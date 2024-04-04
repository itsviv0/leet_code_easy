bool isPalindrome(int x) {
    long int num = x, palindrome = 0;
    if (x<0)
        return false;
    while (num)
    {
        palindrome = palindrome*10 + num % 10;
        num /= 10;
    }
    if (palindrome == x)
        return true;
    else
        return false;
}

// beats 100% runtime and 8.16% memory
// https://leetcode.com/problems/palindrome-number/submissions/1089623487/
