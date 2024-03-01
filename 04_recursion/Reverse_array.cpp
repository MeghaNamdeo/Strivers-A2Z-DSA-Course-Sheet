#include <vector>
using namespace std;

void reversearray(vector<int>& nums, int i, int n) {
    // base case
    if (i>=n/2)
        return;

    //one case
    swap(nums[i], nums[n-i-1]);

    // recursive call
    reversearray(nums, i + 1, n);
}

vector<int> reverseArray(int n, vector<int>& nums) {
    int i = 0;
   
    reversearray(nums,i,n);

    return nums;
}
