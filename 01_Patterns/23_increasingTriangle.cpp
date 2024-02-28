
#include <iostream>
using namespace std;
/*

  n = 4 
  1 
  2 3 
  3 4 5
  4 5 6 7
  
*/

void nNumberTriangle(int n) {
for(int i = 0 ; i < n ; i++)
{
    for(int j =  0 ; j <= i ; j++)
    {
        cout<<i+j+1;
    }
    cout<<endl;
}
}
int main()
{
    int n ;
 cin>>n ;
 nNumberTriangle(n);
 
 
}
