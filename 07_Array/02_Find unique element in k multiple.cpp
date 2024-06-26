
class Solution{
  public:
    int findUnique(int a[], int n, int k) {
      unordered_map<int,int>freq;
        int ans;
        for(int i=0;i<n;i++)
        {
            freq[a[i]]++;
            
        }
        for(auto i : freq)
        {
            if(i.second%k!=0)
            {
                ans = i.first;
            }
        }
        return ans;
        
        
    
    }

};
 /*
  TC : O(n)
  SC : O(1)
  */
