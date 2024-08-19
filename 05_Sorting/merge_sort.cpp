
void merge(vector<int>&arr,int s,int e)
{
    int mid = (s + e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    vector<int>left(len1);
    vector<int>right(len2);

    //copy values
    int k = s;
    for(int i =0 ;i < len1;i++)
    {
        left[i]=arr[k];
        k++;
    }
    k = mid + 1;
    for(int i =0 ;i < len2;i++)
    {
        right[i]=arr[k];
        k++;
    }
    //merge logic
    int  leftIndex= 0;
    int rightIndex= 0;
    int MainArrayIndex = s;


    while(leftIndex < len1 && rightIndex < len2)
    {
        if(left[leftIndex]< right[rightIndex])
        {
            arr[MainArrayIndex]=left[leftIndex];
            MainArrayIndex++,leftIndex++;

        }
        else
        {
          
            arr[MainArrayIndex]=right[rightIndex];
            MainArrayIndex++,rightIndex++;
            
        
        }
    }

    //copy logic  for left array
    while(leftIndex<len1)
    {
        arr[MainArrayIndex]=left[leftIndex];
        MainArrayIndex++,leftIndex++;
    }

     //copy logic  for right array
    while(leftIndex<len1)
    {
        arr[MainArrayIndex]=right[rightIndex];
        MainArrayIndex++,rightIndex++;
    }


}



void mergeSORT(vector<int>&arr,int s , int e)
{
    //base case
    if(s >= e)return;

    //find mid
    int mid = (s + e)/2;

    //sort left part
    mergeSORT(arr,s,mid);

    //sort right part
    mergeSORT(arr,mid+1 , e);

    //merge two sorted array
    merge(arr,s,e);
}

void mergeSort(vector < int > & arr, int n) {
 int s = 0;
 int e = n -1 ;
 mergeSORT(arr,s,e);   
}
/*
Time Complexity (TC): O(n log n)
Space Complexity (SC): O(n)*/
