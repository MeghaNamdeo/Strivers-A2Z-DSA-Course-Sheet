int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i = 0 ; i < arr.size(); i++)
    {
        if(arr[i]==num) return i;

    }
    return -1;
}

//Time Complexity : O(n)
