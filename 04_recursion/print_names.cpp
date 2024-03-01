void printName(int i, int n, vector<string>& ans) {
    // Base case
    if (i > n) {
        return;
    }
    //one case
    ans.push_back("Coding Ninjas");

    // Recursive call
    printName(i + 1, n, ans);
}

vector<string> printNTimes(int n) {
    vector<string> ans; 
    int i = 1;
    printName(i, n, ans);

    return ans;
}
