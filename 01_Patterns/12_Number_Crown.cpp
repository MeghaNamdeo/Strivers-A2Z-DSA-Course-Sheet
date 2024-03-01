Example:
Input: ‘N’ = 3

Output: 

1         1
1 2     2 1
1 2 3 3 2 1
 
 void numberCrown(int n) {
     int space= 2*n -2;
    for(int i = 1 ; i <= n ; i++)

    {
        //for number 
        for(int j = 1 ; j <=i;j++ )
        {
             cout<<j<<" ";
        }  
       //for space
        for(int j =1 ; j <=space;j++ )
        {
             cout<<" ";
        }
        
        //for number
        for(int num = i ; num >=1;num-- )
        {
             cout<<num<<" ";
        }  
        cout<<endl;
        space-=2;  
        


    }

}
