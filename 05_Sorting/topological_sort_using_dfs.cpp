class Solution
{
public:
    void topoSortDfs(int src, vector<int> adj[], unordered_map<int,bool>& visited, stack<int>& ans)
    {
        visited[src] = true;
        
        for (auto neighbour : adj[src])
        {
            if (!visited[neighbour])
            {
                topoSortDfs(neighbour, adj, visited, ans);
            }
        }
        
        ans.push(src);
    }
    
    vector<int> topoSort(int V, vector<int> adj[])
    {
        stack<int> ans;
        unordered_map<int, bool> visited;
        
        // Mark all vertices as not visited initially
        for (int i = 0; i < V; ++i)
        {
            visited[i] = false;
        }
        
        // Perform DFS for each unvisited vertex
        for (int i = 0; i < V; ++i)
        {
            if (!visited[i])
            {
                topoSortDfs(i, adj, visited, ans);
            }
        }
        
        // Extract result from stack to vector
        vector<int> result;
        while (!ans.empty())
        {
            result.push_back(ans.top());
            ans.pop();
        }
        
        return result;
    }
};/* Time Complexity:O(V+E)
V: Number of vertices
E: Number of edges

Space Complexity: O(V+E)

*/


#include<bits/stdc++.h>
void topoSortDfs(int src, vector<int> adj[], unordered_map<int,bool>& visited, stack<int>& ans)
    {
        visited[src] = true;
        
        for (auto neighbour : adj[src])
        {
            if (!visited[neighbour])
            {
                topoSortDfs(neighbour, adj, visited, ans);
            }
        }
        
        ans.push(src);
    }
    
vector<int> topologicalSort(vector<vector<int>>& edges, int v, int e)
{
    // Step 1: Initialize adjacency list
    vector<int> adj[v];
    
    // Step 2: Construct adjacency list from edges
    for (auto edge : edges)
    {
        adj[edge[0]].push_back(edge[1]);
    }
    
    // Step 3: Initialize data structures for DFS
    stack<int> ans;
    unordered_map<int, bool> visited;
    
    // Step 4: Mark all vertices as not visited initially
    for (int i = 0; i < v; ++i)
    {
        visited[i] = false;
    }
    
    // Step 5: Perform DFS for each unvisited vertex
    for (int i = 0; i < v; ++i)
    {
        if (!visited[i])
        {
            topoSortDfs(i, adj, visited, ans);
        }
    }
    
    // Step 6: Extract result from stack to vector
    vector<int> result;
    while (!ans.empty())
    {
        result.push_back(ans.top());
        ans.pop();
    }
    
    // Step 7: Return the topologically sorted result
    return result;
}
/* Time Complexity:O(V+E)
V: Number of vertices
E: Number of edges

Space Complexity: O(V+E)

*/