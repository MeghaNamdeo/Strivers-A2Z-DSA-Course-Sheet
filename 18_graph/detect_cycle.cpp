class Solution {
  public:
    bool detectcycle(int node,int parent,vector<bool>&visited,vector<int>adj[] )
    {
        visited[node]= true;
        
        for(int i =0 ; i < adj[node].size();i++)
        {
            if(adj[node][i]==parent)continue;
            if(visited[adj[node][i]])return true;
            if (detectcycle(adj[node][i],node,visited,adj))return true;
        }return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
       vector<bool> visited(V, false);
        //visisted all the unvisited node
        for(int i =0;i<V;i++)
        {
         if(!visited[i]&&detectcycle(i, -1, visited, adj))
         return 1;
        }return 0;
    }
};//TC :O(V+E),SC:O(V)

//using bfs 
class Solution {
  public:
    bool Cycle(  int vertex,vector<int> adj[],vector<bool>&visited)
    {
        //step 1: create queue to store node , parent 
        queue<pair<int,int>>q;
        
        visited[vertex]=true;
        q.push({vertex,-1});
        while(!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;
            
            q.pop();
            for(int i =0 ; i < adj[node].size();i++)
            {
               
                    if(parent == adj[node][i]) continue;
                    if(visited[adj[node][i]])return true;
                
                   visited[adj[node][i]]=true;
                   q.push({adj[node][i],node});
                
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        //step 1: create queue to store node , parent 
        queue<pair<int,int>>q;
        vector<bool>visited(V,false);
        for(int i=0;i<V;i++)
        {
            if(!visited[i]&&Cycle(i,adj,visited))return true;
            
        }
    
        return false;
    }//TC :O(V+E), SC:O(V)
};
