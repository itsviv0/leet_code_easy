bool isPalindrome(char* s) {
    int left = 0, right = strlen(s) - 1;
    while (left<=right)
    {
        if (!isalpha(s[left]) && !isdigit(s[left]))
        {
            left++;
            continue;
        }
        if (!isalpha(s[right]) && !isdigit(s[right]))
        {
            right--;
            continue;
        }
        if (tolower((s[left])) != tolower(s[right]))
            return 0;   
        left++;
        right--;     
    }
    return 1;
}

// beats 100% memory and 5.49% memory
// https://leetcode.com/problems/valid-palindrome/submissions/1093418251/
