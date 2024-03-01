//Brute Force 
time complexity: O(nlogn)
//if no duplicate element is there 
 vector<int> getSecondOrderElements(int n, vector<int> a) {
    sort(a.begin(),a.end());
    return{a[n-2],a[1]};
}

//if no duplicate element is there 
vector<int> getSecondOrderElements(int n, vector<int> a) {
    sort(a.begin(),a.end());

    int largest = a[n-1];
    int secondLargest = -1;
    int minimum= a[0];
    int secondMini=-1;
    for(int i = n-2 ; i >=0 ; i--)
    {
        if(largest !=a[i])
        secondLargest = a[i];
        break;
    }
    for(int i = 1 ; i < n ; i++)
    {
        if(minimum!=a[i])
        secondMini =a[i];
        break;
    }
    return{secondLargest,secondMini };
}


