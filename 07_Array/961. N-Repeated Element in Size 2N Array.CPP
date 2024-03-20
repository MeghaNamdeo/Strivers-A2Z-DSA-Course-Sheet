class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int maxi = INT_MIN;
        int repeatedNumber;
        map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        for (auto i : freq) {
            if (i.second > maxi) {
                maxi = i.second;
                repeatedNumber = i.first;
            }
        }
        return repeatedNumber;
    }
};
/* TC : O(n)
SC : O(n)
*/