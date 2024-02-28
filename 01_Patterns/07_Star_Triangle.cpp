void nStarTriangle(int n) {
    //for rows 
    for(int i = 0 ; i < n ; i++)
    {
        //for space 
        for(int s = 0 ; s <( n - i) - 1 ; s++)
        {
            cout<<" ";
        }
        //for star
        for(int st = 0 ; st <(2* i) + 1 ; st++)
        {
            cout<<"*";
        }
        //for space 
        for(int s = 0 ; s <( n - i) - 1 ; s++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
}