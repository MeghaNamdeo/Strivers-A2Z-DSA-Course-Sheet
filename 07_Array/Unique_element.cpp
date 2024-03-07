#include<vector>
/*
time complexity : O(n)
space complexity :O(1)
*/

int getSingleElement(vector<int> &arr)
	{
		int ans=0;
		for(int  i = 0 ; i < arr.size(); i++)
		{
			ans=ans^arr[i];
		}
		return ans;
	}

    