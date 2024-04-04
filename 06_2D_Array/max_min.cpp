#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int maximum(int arr[][3], int rows, int cols)
{
  int maxi=INT_MIN;
  for(int i=0;i<rows;i++)
  {
    
    for(int j=0;j<cols;j++)
    {
          maxi=max(maxi,arr[i][j]);
    }
    
  }
  return maxi;
}

int minimum(int arr[][3], int rows, int cols)
{
  int mini=INT_MAX;
  for(int i=0;i<rows;i++)
  {
    
    for(int j=0;j<cols;j++)
    {
          mini=min(mini,arr[i][j]);
    }
    
  }
  return mini;
}
int main() {
  int rows=3,cols=3,target =4;
  int arr[][3]={{0,2,3},{3,34,5},{5,6,17}};
  cout<<"Maximum element : "<<maximum(arr, rows, cols)<<endl;
  cout<<"Minimum element  : "<<minimum(arr, rows, cols);
}

/*
output 

Maximum element : 34
Minimum element  : 0

*/