#include <bits/stdc++.h> 
//Algorithm:

//step 1 : swap root and last element 
//step 2: put root in correct position
void heapify(vector<int>& arr, int n, int i)
{
	int largest = i;
	int left = 2*i+1;
	int right = 2 * i + 2;
	if(left < n && arr[largest]<arr[left])
	{
		largest = left;
	}
	if(right < n && arr[largest]<arr[right])
	{
		largest = right;
	}
	if(largest != i)
	{
		swap(arr[largest],arr[i]);
		heapify(arr,n,largest);
	}
}

void Heap(vector<int>& arr, int n)
{

	int size = n;
	while(size > 1)
	{
		//step 1:
		swap(arr[size-1],arr[0]);
		size--;

		//step 2:
		heapify(arr,size,0);
	}

}
vector<int> heapSort(vector<int>& arr, int n) {
	
	
	
    Heap(arr,n);
	return arr;


}
