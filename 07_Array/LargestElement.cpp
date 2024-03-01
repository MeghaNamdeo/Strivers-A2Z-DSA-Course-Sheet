

//Brute Force Solution 

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
   sort(arr.begin(),arr.end());

return arr[n-1];
}
TC =O(n log n)
SC=O(1) 

//Optimal Solution 
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int maxi= INT_MIN;
    for(int i = 0 ; i < n ;i++)
    {
        if(arr[i]>=maxi)
        {
            maxi = arr[i];
        }

    }

return maxi;
}

TC=O(n)
SC=O(1)