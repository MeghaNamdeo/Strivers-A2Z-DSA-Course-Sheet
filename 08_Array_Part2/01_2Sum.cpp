	//brute force 
    
    bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    for(int i = 0 ; i < n ; i++)
	    {
	       for(int j = i + 1 ; j < n ; j++)
	       
	       {
	           if(arr[i]+arr[j]==x)
	           {
	               return true ;
	           }
	       }
	    }
	    return false;
	}


//Time Complexity : O(n^2)
//Space Complexity : O(1)

//better Approach
	
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	  map<int,int>mpp;
	  for(int i = 0 ; i < n ; i++)
	  {
	      int a = arr[i];
	      int more = x - a;
	      if(mpp.find(more)!=mpp.end())
	      {
	          return true;
	      }
	      mpp[a]=i;
	  }
	  return false;
	  
	}


//Time Complexity : O(n)
//Space Complexity : O(n)