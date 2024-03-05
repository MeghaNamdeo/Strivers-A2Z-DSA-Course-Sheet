
//Brute Force 
int isSorted(int n, vector<int> a) {
    for(int i = 0 ; i < n-1 ; i++)
    {
        if(a[i]>a[i+1])
        {
           return false; 
        } 
        

    }
    return true;
    
}
//T C = O(n)
// loop n-2 tk isliy chala kyu i+1 ki bahar nikl jayga
