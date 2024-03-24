/*Example 1:

Input: s = "foobar", letter = "o"
Output: 33
Explanation:
The percentage of characters in s that equal the letter 'o' is 2 / 6 * 100% = 33% when rounded down, so we return 33.
Example 2:

Input: s = "jjjj", letter = "k"
Output: 0
Explanation:
The percentage of characters in s that equal the letter 'k' is 0%, so we return 0.
*/
class Solution {
public:
    int percentageLetter(string s, char letter) {
        map<char,int>freq;
        for(int i = 0 ; i < s.length() ; i++)
        {
            freq[s[i]]++;
        }
        
        int count = freq[letter];
        int  ans = (count*100)/s.length();
        
        return ans;
    }
};
/*
TC : O(n)
SC : O(1)

*/