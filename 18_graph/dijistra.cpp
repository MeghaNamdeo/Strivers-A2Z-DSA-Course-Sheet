#include <bits/stdc++.h>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // create adjacency list
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < edges; i++) {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    vector<int> distance(vertices);
    for (int i = 0; i < vertices; i++) {
        distance[i] = INT_MAX;
    }
    set<pair<int, int>> st;
    distance[source] = 0;
    st.insert(make_pair(0, source));
    while (!st.empty()) {
        auto top = *(st.begin());
        int nodeDistance = top.first;
        int topNode = top.second;
        st.erase(st.begin());
        for (auto nbr : adj[topNode]) {
            if (nodeDistance + nbr.second < distance[nbr.first]) {
                auto record = st.find(make_pair(distance[nbr.first], nbr.first));
                if (record != st.end()) {
                    st.erase(record);
                }
                distance[nbr.first] = nodeDistance + nbr.second;
                st.insert(make_pair(distance[nbr.first], nbr.first));
            }
        }
    }
    return distance;
}
/*
TC: O(E + V log V)
SC: O(V + E)*/
