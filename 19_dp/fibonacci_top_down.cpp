#include<bits/stdc++.h>
using namespace std;
int fib(int n, vector<int>&dp)
{
        //base case 
        if(n <= 1)
        return n;
        //step 2
        if(dp[n]!=-1)
        {
           return dp[n];
        }

        //step 3
        dp[n]=fib(n-1,dp)+fib(n-2,dp);

        return dp[n];
}
int main()
{
      int n ;
      cin>>n;
      //step  1 
      vector<int>dp(n+1);
      for(int i=0;i<=n;i++)
      {
              dp[i]=-1;
      }
      cout<<fib(n,dp)<<endl;
}
/*
 Tc and Sc: O(n)
 


 */

 #include<bits/stdc++.h>
using namespace std;
//bottom up : tabulation method 

int main()
{
      int n ;
      cin>>n;
      //step 1 
      vector<int>dp(n+1);
      //step 2 
      dp[1]=1;
      dp[0]=0;      
      //step 3
      for(int i=2;i<=n;i++)
      {
        dp[i]=dp[i-1]+dp[i-2];
      }
      cout<<dp[n]<<endl;
}
/*
 Tc and Sc: O(n)
 
 */

#include<bits/stdc++.h>
using namespace std;
//space optimization
int main()
{
      int n ;
      cin>>n;
      
      //step 1 
      int prev1=1;
      int prev2=0; 

      //step 3 : for 0 case 
      if(n == 0)
      {
        return prev2;
      }     
      //step 4
      for(int i=2;i<=n;i++)
      {
        curr=prev1+prev2;
        //shift logic
        prev2 = prev1;
        prev1 = curr;
      }
      cout<<prev1<<endl;
      return 0;
}
/*
 Tc : O(n) and Sc: O(1)
 
 */