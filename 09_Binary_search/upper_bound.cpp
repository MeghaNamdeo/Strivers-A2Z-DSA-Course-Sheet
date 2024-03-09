
/* upper bound : smallest index such that arr[index]>x  */
//brute force 
int upperBound(vector<int> &arr, int x, int n){
   for(int i = 0 ; i < n ; i ++)
    {
	     if(arr[i]>x)
	    {
		return i;
		break;
	    }
   }
return n;	
}
/*
Time complexity : O(n)
Space Complexity : O(1)
*/


//optimal solution : binary search 



//brute force 
int upperBound(vector<int> &arr, int x, int n){
   int start = 0;
   int end = n -1;
   int mid ;
   int ans= n;
   while(start<=end)
   {
	   mid = start + ( end - start)/ 2;
	   if(arr[mid]> x)
	   {
		   ans=mid;
		   end = mid - 1;

	   }
	   else
	   {
		   start = mid + 1;
	   }
	   
   }
   return ans;
}
/*
Time Complexity: O(logN), where N = size of the given array.
Reason: We are basically using the Binary Search algorithm.

Space Complexity: O(1) as we are using no extra space.
*/


//using stl

int upperBound(vector<int> &arr, int x, int n){
	return upper_bound(arr.begin(), arr.end(), x)-arr.begin();	
}