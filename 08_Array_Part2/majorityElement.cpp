

#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
	map<int, int> freq;
    int maxi = INT_MIN;
    int majorityElement = -1;

    for (int i = 0; i < v.size(); i++) {
        freq[v[i]]++;
    }

    for (auto i : freq) {
        if (i.second > maxi) {
            maxi = i.second;
            majorityElement = i.first;
        }
    }

    return majorityElement;
}

/* time complexity : O(n), space complexity : O(n)*/
