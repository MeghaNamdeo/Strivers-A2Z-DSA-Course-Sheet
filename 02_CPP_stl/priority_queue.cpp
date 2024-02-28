#include <bits/stdc++.h>
using namespace std;

void priority_queue_stl() {
    // Maximum heap
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.pop();   // {2}
    cout << pq.top() << endl; // Output: 2

    // Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(5); // {5}
    pq1.push(8); // {5, 8}
    cout << pq1.top() << endl; // Output: 5
}

int main() {
    priority_queue_stl();
    return 0;
}
