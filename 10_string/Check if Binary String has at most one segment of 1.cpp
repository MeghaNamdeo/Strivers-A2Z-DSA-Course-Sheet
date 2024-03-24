/*
Example 1:

Input: s = "1001"
Output: false
Explanation: The ones do not form a contiguous segment.
Example 2:

Input: s = "110"
Output: true
*/
class Solution {
public:
    bool checkOnesSegment(string s) {
        for (int i = 1; i < s.length(); i++) {
            if (s[i - 1] == '0' && s[i] == '1')
                return false;
        }
        return true;
    }
};
/*
TC : O(n)
SC :O(1)
*/