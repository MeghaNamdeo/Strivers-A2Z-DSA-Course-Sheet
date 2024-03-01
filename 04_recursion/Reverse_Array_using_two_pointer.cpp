#include <vector>
using namespace std;

void reversearray(vector<int>& nums, int s, int e) {
    // base case
    if (s >= e)
        return;

    //one case
    swap(nums[s], nums[e]);

    // recursive call
    reversearray(nums, s + 1, e - 1);
}

vector<int> reverseArray(int n, vector<int>& nums) {
    int s = 0;
    int e = nums.size() - 1;

    
    
    reversearray(nums, s, e);

    return nums;
}
