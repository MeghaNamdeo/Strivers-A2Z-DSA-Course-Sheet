#include<iostream>
using namespace std;

// Brute force
bool prime(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }

    return count == 2;
}

int main() {
    int n;
    cin >> n;

    if (prime(n))
        cout <<"true"<< endl;
    else
        cout <<"false"<< endl;

    return 0;
}
