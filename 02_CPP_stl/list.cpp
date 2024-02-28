#include <iostream>
#include <list>
using namespace std;

void explainList() {
    list<int> ls;
    ls.push_back(1);      // output {1}
    ls.emplace_back(3);   // output: {1,3}

    ls.push_front(7);     // output: {7,1,3}
    ls.emplace_front(5);  // output: {5,7,1,3}

    // rest of the functions are similar to vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main() {
    explainList();
    return 0;
}
