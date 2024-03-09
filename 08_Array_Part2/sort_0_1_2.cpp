//brute Force solution 
#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    sort(arr.begin(),arr.end());
}
//time complexity: O(nlogn)
//space complexity : O(1)


//better solution 
#include <vector>

void sortArray(std::vector<int>& arr, int n)
{
    vector<int> ans;
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c0++;
        else if (arr[i] == 1)
            c1++;
        else
            c2++;
    }

    
    for (int i = 0; i < c0; i++)
    {
        ans.push_back(0);
    }

    for (int i = 0; i < c1; i++)
    {
        ans.push_back(1);
    }

    for (int i = 0; i < c2; i++)
    {
        ans.push_back(2);
    }

    
    arr = ans;
}

//Time Complexity : O(n), Space Complexity : O(n).

//optimal solution
//Dutch National Flag Algorithm 

[0 to low-1]= 0 extreme left
[low ...mid-1]=1 
[high+1..n-1]=2  extreme right