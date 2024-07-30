     void dfs(int src, vector<int> adj[], unordered_map<int, bool>& visited, vector<int>& ans) 
    {
        visited[src] = true;
        ans.push_back(src);
        for (auto neighbor : adj[src]) {
            if (!visited[neighbor]) {
                dfs(neighbor, adj, visited, ans);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        unordered_map<int, bool> visited;
        int src = 0;
        dfs(src, adj, visited, ans);
        return ans;
    }
    

/*
TC : O(v + e)
Sc : O(v)
*/