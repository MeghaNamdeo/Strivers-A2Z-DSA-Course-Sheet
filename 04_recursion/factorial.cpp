int factorial(int n) {
    // base case
    if (n == 0 || n == 1)
        return 1;

    // recursive call
    return n * factorial(n - 1);
}

int factorial(int n) {
   
    int res = 1, i; 
    for (i = 2; i <= n; i++) 
        res *= i; 
    return res;
}
