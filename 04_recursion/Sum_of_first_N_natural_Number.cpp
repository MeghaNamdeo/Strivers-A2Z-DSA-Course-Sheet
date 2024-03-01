long long sumFirstN(long long n) {
    
    //base case
    if(n <=0)return 0;
    
    //recursive call
    return n +sumFirstN(n - 1);
}