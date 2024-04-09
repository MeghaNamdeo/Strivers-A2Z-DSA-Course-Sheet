#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<vector<int>>arr;

  vector<int> a{1,2,3};
  vector<int> b{2,4,6};
  vector<int> c{1,3,7};

  arr.push_back(a);
  arr.push_back(b);
  arr.push_back(c);
//Number of rows : arr.size()
//number of column : arr[0].size()
  for(int i=0;i<arr.size();i++)
  {
    //if(number of column same)
    for(int j=0;j<arr[0].size();j++)
    {
      cout<<arr[i][j]<< " ";
    }cout<<endl;

  }
  cout<<endl;

  for(int i=0;i<arr.size();i++)
  {
    //if(number of column different
    for(int j=0;j<arr[0].size();j++)
    {
      cout<<arr[i][j]<< " ";
    }cout<<endl;

  }
  
  return 0;
}