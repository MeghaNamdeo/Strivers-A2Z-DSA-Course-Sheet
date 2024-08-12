//brute force
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
      vector<int>ans;
      for(int i=0;i<arr1.size();i++)
      {
          ans.push_back(arr1[i]);
      }
      for(int i=0;i<arr2.size();i++)
      {
         ans.push_back(arr2[i]); 
      }
      sort(ans.begin(),ans.end());
      
      int mid = ans.size()/2 -1;
      int mid_next= mid+1;
      return ans[mid]+ans[mid_next];
      
    }
};/* TC: O(n log n)
SC: O(n)*/

