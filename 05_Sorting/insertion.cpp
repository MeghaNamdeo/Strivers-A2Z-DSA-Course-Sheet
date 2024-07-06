#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i = 0 ; i < n ; i++)
    {
        int j = i;
        while(j>0&&arr[j-1]>arr[j])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
/*
best case time complexity : O(n)
Time complexity: O(n^2),
Space Complexity: O(1)
*/