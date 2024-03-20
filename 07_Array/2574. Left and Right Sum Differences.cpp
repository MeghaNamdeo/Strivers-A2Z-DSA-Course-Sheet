class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left;
        vector<int>right;
        int sum = 0 ;
        left.push_back(0);
        for( int i = 0 ; i < nums.size()-1; i++)
        {
           
            sum = sum + nums[i];
            left.push_back(sum);
        }
        int sum2 = 0;
        right.push_back(0);
        
        for( int i = nums.size() - 1; i > 0; i--)
        {
           
            sum2 = sum2 + nums[i];
            right.push_back(sum2);
        }
        reverse(right.begin(),right.end());
        vector<int>ans;
        for(int i = 0 ; i < nums.size() ; i ++)
        {
           ans.push_back(abs(left[i]-right[i]));
        }
        return ans;
        
    }
};

/*
TC : O(n)
SC : O(n)
*/