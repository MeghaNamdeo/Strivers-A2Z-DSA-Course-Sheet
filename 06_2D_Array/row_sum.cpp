#include <iostream>
using namespace std;
void printRowWiseSum(int arr[][3], int rows, int cols)
{
  //row sum : row wise traversal 
  for(int i=0;i<rows;i++)
  {
    int sum=0;
    for(int j=0;j<cols;j++)
    {
      sum=sum+arr[i][j];
    }
    cout<<sum<<endl;
  }
}
int main() {
  int rows=3,cols=3;
  int arr[][3]={{1,2,3},{3,4,5},{5,6,7}};
  printRowWiseSum(arr, rows, cols);
}

/*
output 
6 
12
18 
*/


#include <iostream>
using namespace std;
void printColWiseSum(int arr[][3], int rows, int cols)
{
  //col sum :col wise traversal 
  for(int i=0;i<rows;i++)
  {
    int sum=0;
    for(int j=0;j<cols;j++)
    {
      sum=sum+arr[j][i];
    }
    cout<<sum<<endl;
  }
}
int main() {
  int rows=3,cols=3;
  int arr[][3]={{1,2,3},{3,4,5},{5,6,7}};
  printColWiseSum(arr, rows, cols);
}

/*
9
12
15
*/