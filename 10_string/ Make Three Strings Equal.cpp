class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int i = 0;
        int minLen = min({s1.length(), s2.length(), s3.length()});
        while (i < minLen && s1[i] == s2[i] && s2[i] == s3[i]) {
            i++;
        }
        if (i == 0)
            return -1;

        return s1.length() + s2.length() + s3.length() - (i * 3);
    }
};
/* TC : O(n)
SC : O(1)
*/