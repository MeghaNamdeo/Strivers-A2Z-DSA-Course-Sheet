//brute force 
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int target) {
        int n = arr.size();
        int c = 0;
        
        for (int i = 0; i < n; i++) {
            int XOR = 0;
            for (int j = i; j < n; j++) {
                XOR ^= arr[j];
                if (XOR == target) {
                    c++;
                }
            }
        }
        
        return c;
    }
};//TC:O(n^3),SC:O(1)
