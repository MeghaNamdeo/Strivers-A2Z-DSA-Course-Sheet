
//brute Force 
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        for (int i = 0; i < nums1.size(); i++) {
            s.insert(nums1[i]);
        }

        for (int i : nums2) {
            if (s.find(i) != s.end()) {
                return i;
            }
        }
        return -1;
    }
};
/* 
Time Complexity :O(n)
Space Complexity : O(n)
*/

//Better Approach : using Binary Search
class Solution {
public:
    bool BinarySearch(vector<int>& nums, int target)
    {
        int s = 0; 
        int e = nums.size() - 1;
        int mid;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            if (nums[mid] == target)
            {
                return true;
            }
            else if (nums[mid] < target)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return false;
    }

    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(), nums2.end()); // Sorting nums2 for binary search
        for (int num : nums1)
        {
            if (BinarySearch(nums2, num))
            {
                return num;
            }
        }
        return -1;
    }
};
/*
TC : O(mlogn)
SC : O(1)
*/

//Optimal Approach : Two Pointer

