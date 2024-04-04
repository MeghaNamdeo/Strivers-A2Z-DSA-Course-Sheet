#include <bits/stdc++.h> 
bool findInMatrix(int x, vector<vector<int>> &arr)
{
  

  for(int i=0;i<arr.size();i++)
  {
   
    for(int j=0;j<arr[i].size();j++)
    {
      if(arr[i][j]==x)return true;
    }
   
  }return false;
}