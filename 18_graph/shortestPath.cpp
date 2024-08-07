//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//using BFS
class Solution {
public:
    vector<int> ShortestPath(int src, int des, vector<vector<pair<int, int>>>& adj) {
        queue<int> q;
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;
        
        // Initialize steps for BFS
        q.push(src);
        visited[src] = true;
        parent[src] = -1;
        
        while (!q.empty()) {
            int fNode = q.front();
            q.pop();
            
            // Traverse neighbors of current node
            for (auto nbr : adj[fNode]) {
                int neighbor = nbr.first;
                // If neighbor hasn't been visited
                if (!visited[neighbor]) {
                    q.push(neighbor);
                    visited[neighbor] = true;
                    parent[neighbor] = fNode;
                }
            }
        }
        
        // Reconstruct the shortest path from destination to source
        vector<int> ans;
        int node = des;
        while (parent[node] != -1) {
            ans.push_back(node);
            node = parent[node];
        }
        ans.push_back(src); 
        reverse(ans.begin(), ans.end()); 
        return ans;
    }
    
    vector<int> shortestPath(int N, int M, vector<vector<int>>& edges) {
        // Create adjacency list
        vector<vector<pair<int, int>>> adj(N);
        
        // Populate adjacency list with edges and weights
        for (auto edge : edges) {
            int u = edge[0], v = edge[1], w = edge[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w}); // Consider for undirected graph
        }
        
        int src = 0;
        int des = N - 1;
        return ShortestPath(src, des, adj);
    }
};//Time Complexity (TC): O(N + M)
//Space Complexity (SC): O(N + M)

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends