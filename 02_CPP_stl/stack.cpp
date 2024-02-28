#include<bits/stdc++.h>
using namespace std;

void stackstl() {
    stack<int> st;
    
    st.push(1); // output: {1}
    st.push(2); // output: {1, 2}
    st.emplace(40); // output: {1, 2, 40}
    
    cout << st.top(); // output: 40
    
    st.pop();
    cout << st.size(); // output: 2
    cout << st.top(); // output: 2

    stack<int> st1, st2;
    st1.swap(st2);
}
