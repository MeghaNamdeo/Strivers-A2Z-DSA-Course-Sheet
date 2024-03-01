Example:
Input: ‘N’ = 3

Output: 
1
2 2 
3 3 3

void triangle(int n) {
	for(int i = 0 ; i < n ; i ++)
	{
		for(int j = 0 ; j <= i ; j++)
		{
			cout<<i+1 << " ";
		}
		cout<<endl;
	}
}
