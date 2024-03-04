

//brute force 

vector<int> rotateArray(vector<int>arr, int k) {
    vector<int>temp;
    int n = arr.size();
    for(int i =0 ; i < k; i++)
    {
        temp.push_back(arr[i]);


    }
    for(int i =k  ; i < n  ;i++)
    {
        arr[i-k]=arr[i];

        

    }
    for(int i = n - k   ; i < n  ;i++)
    {
        arr[i]=temp[i - (n - k)];
        
        

    }
    return arr;
}
T C = O(2n)


//optimal
vector<int> rotateArray(vector<int>arr, int k) {
   k = k % arr.size();
        reverse(arr.begin(), arr.begin() + k);    // Reverse the first 'k' elements
        reverse(arr.begin() + k, arr.end());      // Reverse the remaining elements
        reverse(arr.begin(), arr.end());
        return arr;
}

