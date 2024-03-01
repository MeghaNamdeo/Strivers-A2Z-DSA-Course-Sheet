void printN(int i, int n, vector<int>& ans) {
    // Base case
    if (i > n) {
        return;
    }
    //one case
    ans.push_back(i);

    // Recursive call
    printN(i + 1, n, ans);
}

vector<int> printNos(int x){
    vector<int> ans; 
    int i = 1;
    printN(i, x, ans);

    return ans;
}
