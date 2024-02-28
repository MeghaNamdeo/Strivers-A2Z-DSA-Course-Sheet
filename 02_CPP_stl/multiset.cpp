#include <iostream>
#include <set>
using namespace std;

void multisetstl() {
    // Everything is the same as set
    // Only stores duplicate elements also
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.erase(1); // All 1's erased
    int cnt = ms.count(1); // Output: 0

    ms.erase(ms.find(1)); // Only a single one erased

    ms.erase(ms.find(1), ms.find(1) + 2);

    // Rest all functions are the same as set
}

int main() {
    multisetstl();
    return 0;
}
