     class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node , vector<bool>&visited,vector<int> adj[],vector<int>&ans) {
      
       visited[node]=true;
       ans.push_back(node);
       for(int i =0; i<adj[node].size();i++)
       {
           if(!visited[adj[node][i]])
           {
               dfs(adj[node][i],visited, adj,ans);
           }
       }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
      
       vector<int>ans;
       int node = 0;
       vector<bool> visited(V, false);
       dfs(node,visited,adj,ans);
       return ans;
           
       
    }
};//TC:O(V+E) , SC:O(V)


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