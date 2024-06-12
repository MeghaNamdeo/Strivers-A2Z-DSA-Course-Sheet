

class Solution {
public:
//brute force 
    int maxProduct(vector<int>& arr) {
      int result = INT_MIN;
      int n = arr.size();
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            int prod = 1;
            for(int k=i;k<=j;k++) 
                prod *=arr[k];
            result = max(result,prod);    
        }
    }
    return result;
    }
};

/*
Time Complexity (TC): O(n^2)
Space Complexity (SC): O(1)
*/

class Solution {
public:
//optimal solution : observation 
    int maxProduct(vector<int>& arr) {
        int pre = 1, suff = 1;
        int ans = INT_MIN;
        int n = arr.size();

        for(int i = 0 ; i < n ;i++)
        {
            if(pre == 0) pre = 1;
            if(suff == 0) suff = 1;

            pre = pre * arr[i];
            suff = suff * arr[n - i - 1];
            ans = max(ans , max(pre , suff));
        }

        return ans;
        
    }
};

/*
Time Complexity (TC): O(n)
Space Complexity (SC): O(1)
*/