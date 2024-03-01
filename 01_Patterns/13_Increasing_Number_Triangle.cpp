

/*
Input: ‘N’ = 3

Output: 

1
2 3
4 5 6

*/
void nNumberTriangle(int n) {
    int number = 1;
    for(int i = 1 ; i <= n ; i++)
   {  
    
       for(int j =  1 ; j <= i ; j++)
       {
            cout<<number<<" ";
            number++;
       }
    cout<<endl;
    }
}
