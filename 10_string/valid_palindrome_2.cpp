
class Solution {
public:
    bool checkPalindrome(string s, int i, int j) {
        for (; i <= j; i++, j--) {
            if (s[i] != s[j])
                return false;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        for (; i <= j; i++, j--) {
            if (s[i] != s[j])
                return checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1);
        }
        return true;
    }
};
/*
Time complexity : O(n)
space complexity :O(1)
*/

/*
Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false

*/