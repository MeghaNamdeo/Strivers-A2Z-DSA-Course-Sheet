#include<set>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	set < int > s;
  for (int i = 0; i < n; i++) {
    s.insert(arr[i]);
  }
  int k = s.size();
  int j = 0;
  for (int x: s) {
    arr[j++] = x;
  }
  return k;

}
//or
int removeDuplicates(vector<int> &arr, int n) {
	set<int>s;

	for(int i = 0 ; i < n ; i++)
    {
		s.insert(arr[i]);
	}

	vector<int>ans;

	for(auto it : s)
	{
	 ans.push_back(it);	
	}

	return ans.size();

}

//Time complexity: O(n*log(n))+O(n)

//Space Complexity: O(n) 



//optimal Apporach : Two pointer Approach 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i = 0 ;
       for(int j = 1 ; j < nums.size(); j++)
       {
           if(nums[j]!=nums[i])
           {
               nums[i+1]=nums[j];
               i++;
           }

       } 
       return i+1;
    }
};

//Time Complexity : O(n)
//Space Complexity : O(1)