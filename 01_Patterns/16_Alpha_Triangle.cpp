/*
Input: ‘N’ = 3

Output: 
C
C B 
C B A
*/

void alphaTriangle(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A' + n - 1;
        for (int j = 0; j <= i; j++) {
            cout << ch-- << " ";
        }
        cout << endl;
    }
}