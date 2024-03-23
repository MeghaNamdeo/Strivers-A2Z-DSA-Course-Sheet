
/*
Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
*/
class Solution {
public:
//using bit manupulation
    int singleNumber(vector<int>& nums) {
        int ans =0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};
/*
TC : O(n)
SC : O(1)
*/

class Solution {
public:
    // using  map
    int singleNumber(vector<int>& nums) {
        map<int, int> freq;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }
        for (auto i : freq) {
            if (i.second == 1)
                return i.first;
        }
        return -1;
    }
};
/*
TC :nlog m + m , m is size of map
SC : O(m)
*/