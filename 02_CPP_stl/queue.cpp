#include <bits/stdc++.h>
using namespace std;

void queuestl() {
    queue<int> q;

    q.push(1); // output: {1}
    q.push(2); // output: {1, 2}
    q.emplace(40); // output: {1, 2, 40}
    q.back() += 5;
    cout << q.back(); // output: 45

    q.pop();
    cout << q.size(); // output: 2
    cout << q.front(); // output: 2

   
}

int main() {
    queuestl();
    return 0;
}
