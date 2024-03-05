 void selectionSort(int arr[], int n)
    {
       int mini ;
       for( int i = 0 ; i <= n - 2 ; i ++)
       {
           mini = i;
           for( int j = i ; j<= n-1; j++)
           {
               if(arr[j]<arr[mini]) mini =j;
           }
           swap ( arr[i],arr[mini]);
       }
    }
    //Time Complexity : n + (n -1 )+ (n - 2).............= n ( n+1)/2 = O(n^2)
