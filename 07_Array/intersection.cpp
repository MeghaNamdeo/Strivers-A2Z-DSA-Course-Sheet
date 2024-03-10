//brute force 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    ans.push_back(nums1[i]);
                }
            }
        }

       

        set<int> uniqueSet(ans.begin(), ans.end());
        vector<int> uniqueVector(uniqueSet.begin(), uniqueSet.end());
        return uniqueVector;
    }
};
/*
Time Complexity: O(N + M) - The loop iterates through both nums1 and nums2 once.

Space Complexity: O(min(N, M)) - The space used is proportional to the smaller of the two input arrays.
*/

//better approach 
int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
     set<int>st;
      for(int i =0 ; i < n;i++)
      {
          st.insert(a[i]);
      }
      int c=0;
        for(int i=0;i<m;i++)
        {int key = b[i];
            if (st.find(key) != st.end()) {
                c++;
                st.erase(key);
            }
        }
        return c;
    }