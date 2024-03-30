class Solution {
public:
//brute force 
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                
                int sum = 0;

                
                for (int k = i; k <= j; k++) {
                    sum += nums[k];
                }

                maxi = max(maxi, sum);
            }
        }
        return maxi;
    }
};
/*
Time Complexity :O(n^3)
Space Complexity :O(1)
*/

class Solution {
public:
    // better force
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {

                sum += nums[j];
            
                maxi = max(maxi, sum);
            }
        }
        return maxi;
    }
};
/*
Time Complexity :O(n^2)
Space Complexity :O(1)
*/

class Solution {
public:
    // optimal approach : Kadane  Algorithm
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];

            maxi = max(maxi, sum);

            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
};
/*
Time Complexity : O(n)

Space Complexity :O(1)
*/
