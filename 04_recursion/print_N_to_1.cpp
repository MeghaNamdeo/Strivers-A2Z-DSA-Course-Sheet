void printN( int n, vector<int>& ans) {
    // Base case
    if (n<=0) {
        return;
    }
    //one case
    ans.push_back(n);

    // Recursive call
    printN( n - 1, ans);
}

vector<int> printNos(int x){
    vector<int> ans; 
   
    printN( x, ans);

    return ans;
}
