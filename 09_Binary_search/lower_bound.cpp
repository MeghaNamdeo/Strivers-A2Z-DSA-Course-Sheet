

/* lower bound : smallest index such that arr[index]>=x  */

//brute force 
int lowerBound(vector<int> arr, int n, int x) {
	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i]>=x)
		{
		return i;
		break;
	   }
	}
	return n;
}

//Time Complexity : O(n)
//Space  complexity : O(1)

//optimal approach 
int lowerBound(vector<int> arr, int n, int x) {
	int low = 0;
	int high = n -1;
    int mid;
    int ans= n;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(arr[mid]>=x)
		{
		ans= mid;
		high= mid-1;
		}
		else
		{
		low = mid+1;
		
		}
	}
	return ans;
	
}

/*Time Complexity: O(logN), where N = size of the given array.
Reason: We are basically using the Binary Search algorithm.

Space Complexity: O(1) as we are using no extra space.
*/


//using stl 
int lowerBound(vector<int> arr, int n, int x)
{
	return lower_bound(arr.begin(), arr.end(), x)-arr.begin();
}

