#include <iostream>
#include <deque>

using namespace std;

void explainDeque() {
    deque<int> dq;
    
    dq.push_back(1);            // output: {1}
    dq.emplace_back(2);         // output: {1, 2}
    
    dq.pop_back();              // output: {1}
    dq.pop_front();             // output: {}

    int backElement = dq.back();
    int frontElement = dq.front();

    // rest of the functions are similar to vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main() {
    explainDeque();
    return 0;
}
