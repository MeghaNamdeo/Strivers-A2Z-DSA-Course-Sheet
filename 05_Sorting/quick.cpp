
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        //base case
        if(low>=high)return;
        
        //partition logic
        int p = partition(arr,low,high);
        //sort left subarray
        quickSort( arr, low, p - 1);
        //sort right subarray
        quickSort( arr, p + 1, high);
        
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        //step 1: choose pivot
      int pivot_index=low;
      int pivot_element = arr[pivot_index];
      int count=0;
      
        //step 2: count : to find correct position of pivot
      for(int i=low;i<=high;i++)
      {
          if(arr[i]<=pivot_element)count++;
      }
      
      //step 3 : right position of pivot
      int right_position = count + low -1;
      swap(arr[pivot_index],arr[right_position]);
      pivot_index=right_position;
      
      //step 4:all small come left side of pivot and large comes right side of pivot 
      int i= low;
      int j= high;
      while(i < pivot_index && j > pivot_index)
      {
          while(arr[i]<=arr[pivot_index])i++;
          while(arr[j]>arr[pivot_index])j--;
          if(i < pivot_index && j > pivot_index)
          swap(arr[i],arr[j]);
      }
      return pivot_index;
      
    }
};



int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
/*
Time Complexity: 𝑂(𝑛logn) on average, O(n^2) in the worst case.
Space Complexity:O(logn) 
 */
