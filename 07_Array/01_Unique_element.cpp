//using map
class Solution {
  public:
    int singleElement(int arr[] ,int N) {
       unordered_map<int,int>freq;
       int ans;
       for(int i =0;i<N ;i++)
       {
           freq[arr[i]]++;
       }
       
       for(auto i: freq)
       {
           if(i.second == 1)
           {
               ans = i.first;
               
           }
       }
       return ans;
    }
    /*
    TC : O(n)
    SC : O(1)
    */

    //using xor 
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++)
        {
        ans = ans  ^nums[i];
        }
        return ans;
    }
        
};

/*
TC : O(n)
SC : O(1)
*/