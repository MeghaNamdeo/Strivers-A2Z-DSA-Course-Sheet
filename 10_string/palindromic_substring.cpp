// Brrute Force 
class Solution {
public:
bool isPalindrome(string str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}


int countSubstrings(string s) {
         int count = 0;
         int n = s.length();

    // Step 1: Find all substrings
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // Step 2: Check if substring is palindrome
            if (isPalindrome(s, i, j)) {
                // If palindrome, increment count
                count++;
            }
        }
    }

    return count;
    }
};
/*
Time Complexity : O(n^3)
space complexity : O(1)

*/

//optimal Solution 
class Solution {
public:
int expandAroundIndex(string s , int left , int right ){
    int count = 0 ;
    while(left >= 0 && right<s.length() &&s[left]==s[right]){
        count++;
        left--;
        right++;
    }
    return count ; 
}
    int countSubstrings(string s) {
        int totalCount = 0 ;
        int n = s.length();
        for(int centre = 0 ; centre <n ; centre++){
            
            //odd length 
            int oddkaans=expandAroundIndex(s,centre,centre);
                        totalCount= totalCount+oddkaans;

            //even length

            int evenkaans = expandAroundIndex(s,centre,centre+1);
            totalCount= totalCount + evenkaans;
        }
        return totalCount;
        
    }
};

/*
Time complexity :O(n^2) 
Space Complexity : O(1)
*/