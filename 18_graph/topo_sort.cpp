
class Solution
{
	public:
	//using dfs.
	void DFS( int node ,vector<int> adj[],vector<bool>&visited,stack<int>&s)
	{
	    visited[node]=true;
	    for(int i =0;i<adj[node].size();i++)
	    {
	        if(!visited[adj[node][i]])
	        {
	            DFS(adj[node][i],adj,visited,s);
	        }
	    }
	        s.push(node);
	    
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<bool>visited(V,0);
	    
	    stack<int>s;
	    for(int i =0;i<V;i++)
	    {
	        if(!visited[i])
	    
	          DFS(0,adj,visited,s);
	    }
	    vector<int>ans;
	    while(!s.empty())
	    {
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	   
	}
};//TC:O(V+E),SC:O(V)
