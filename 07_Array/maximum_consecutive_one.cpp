class Solution {
public:
//optimal solution : 

    int findMaxConsecutiveOnes(vector<int>& nums) {
     int count = 0 , maxi = 0;
     for(int i = 0 ; i < nums.size(); i++)
     {
         if(nums[i]==1)
         {
             count++;
             maxi=max(count,maxi);

         }
         else
         {
             count =0;
         }
     } 
     return maxi;  
    }
};
/*
Time Complexity : O(n)
Space Complexity : O(1)
*/