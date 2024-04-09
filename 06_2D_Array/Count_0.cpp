class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
	    int c=0;
	 for(int i=0;i<A.size();i++)
	 {
	     for(int j=0;j<A[i].size();j++)
	     {
	         if(A[i][j]==0)
	         {
	             c++;
	         }
	     }
	 }
	 return c;
	}
};