Example:
Input: ‘N’ = 3

Output: 

*****
 ***
  *
void nStarTriangle(int n) 
{
     for(int i = 0 ; i < n ; i++)
        {
            //for space
            for(int s = 0 ;s < i ; s++)
            {
            cout<<" ";
            }
            
            //for star
            for(int st= 0 ;st < (2*n) - (2* i) -1 ; st++)
            {
            cout<<"*";
            }
            
            //for space
            for(int s= 0 ;s < i ; s++)
            {
            cout<<" ";
            }
            cout<<endl;
            
        }
        
    
}


// } Driver Code Ends
