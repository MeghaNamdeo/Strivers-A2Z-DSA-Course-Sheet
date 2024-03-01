Example:
Input:  ‘N’ = 3

Output: 
* 
* *
* * *

void nForest(int n) {
    for (int i = 0 ; i < n ; i ++)
    {
	for(int j = 0 ; j <= i ;j++)
	{
		cout<<"*"<<" ";
	}
	cout<<endl;
     }
}
