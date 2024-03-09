//lower bound same as 
int searchInsert(vector<int>& arr, int m)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
       
        if (arr[mid] >= m) {
            ans = mid;
            
            high = mid - 1;
        }
        else {
            low = mid + 1; 
        }
    }
    return ans;
}
//time complexity : O(logn)
//space complexity : O(1)