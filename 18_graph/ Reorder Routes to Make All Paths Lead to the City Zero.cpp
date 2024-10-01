class Solution {
public:
int count=0;
void dfs(int u , int parent ,unordered_map<int,vector<pair<int,int>>>&adj )
{
    for (auto &p : adj[u])
    {
        int v = p.first;
        int check = p.second;//1=real, 0=fake
        if(v !=parent)
        {
            if(check == 1)
            {
                count++;
            }
            dfs(v,u,adj);
        }
    }
}
    int minReorder(int n, vector<vector<int>>& connections) {
      //adj
      unordered_map<int,vector<pair<int,int>>>adj;
      for(auto & v : connections)
      {
        int a = v[0];
        int b =v[1];
        adj[a].push_back({b,1});//real edge
        adj[b].push_back({a,0});//fake edge
      }  
      dfs(0,-1,adj);
      return count; 
    }
};
//TC : O(n+m)

//DFS - Using Visited Array
class Solution {
public:
    int count = 0;
    void dfs(int node, int parent, vector<vector<pair<int, int>>>& adj, vector<bool>& visited) {
        visited[node] = true;
        
        for (auto& [child, sign] : adj[node]) {
            if (!visited[child]) {
                count += sign;
                dfs(child, node, adj, visited);
            }
        }
    }

    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto& connection : connections) {
            adj[connection[0]].push_back({connection[1], 1});
            adj[connection[1]].push_back({connection[0], 0});
        }
        vector<bool> visited(n, false);
        dfs(0, -1, adj, visited);
        return count;
    }
};