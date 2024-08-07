
In a cyclic graph, topological sort never completes that's why it is never equal to n 

class Solution
{
	public:
	//using BFS (Kahn's Algorithm) 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{//step 1 : create queue
	queue<int>q;
	//step 2: create indegree map 
	unordered_map<int,int>indegree;
	//step 3:indegree calculate
	for (int i = 0; i < V; ++i) {
            for (auto nbr : adj[i]) {
                indegree[nbr]++;
            }
        }
        
	//step 4 : put all nodes inside queue,which has indegree=0
	for(int i =0 ; i < V ;i++)
	{
	    if(indegree[i]==0)
	    {
	        q.push(i);
	    }
	}
	//step 5:BFS logic
	vector<int>ans;
	while(!q.empty())
	{
	    int fNode = q.front();
	    q.pop();
	    ans.push_back(fNode);
	    for(auto &nbr:adj[fNode])
	    {
	        indegree[nbr]--;
	        //check for zero again
	        if(indegree[nbr]==0)
	        {
	            q.push(nbr);
	        }
	    }
	}
	    return ans;
	    
	}
	
};

/*there is also one condition 
if(ans.size()==n)
{
    cout<<"Topo Sort is valid ";
}
else
{
    cout<<"Cycle present ,Topo Sort is invalid";
}
*/
#include <bits/stdc++.h> 

/*
Kahn's algorithm is a popular method used to perform
 topological sorting on a directed acyclic graph  
(DAG). Topological sorting is ordering the vertices
 in a DAG, such that for every directed edge (u, v),
  vertex u comes before vertex v in the ordering.
   In other words, there are no cycles in the sorted
    graph.

*/
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
     vector<vector<int>> adj(v);
   //step 1 create adj list 
   for(int i = 0 ; i < e ;i++)
   {
       int u = edges[i][0];
       int v = edges[i][1];
       adj[u].push_back(v);

   }
   //step 2 find all indegrees
   vector<int>indegree(v);
   for(int i =0 ; i < v ; i++)
   {
       for(int j : adj[i])
       {
           indegree[j]++;
       }
   }
   //step 3 Initialize queue with nodes having 0 indegree
   queue<int>q;
   for(int i =0 ; i < v ;i++)
   {
       if(indegree[i]==0)
       {
           q.push(i);
       }
   }

   //step 4 :Step 4: Perform BFS for topological sorting
   //create vector ans 
   vector<int>ans;
   while(!q.empty())
   {
       int frontElem = q.front();
       q.pop();

       //ans store
       ans.push_back(frontElem);

       //neighovore indrgree update
       for(auto n : adj[frontElem] )
       {
           indegree[n]--;
           if(indegree[n]==0)
           {
               q.push(n);
           }
       }
    
   }
return ans;

}
/*Time Complexity: O(V+E) where 

V is the number of vertices and 

E is the number of edges.
Space Complexity: O(V+E)
*/


/*
Kahn's Algorithm is a topological sorting algorithm that uses a queue-based approach to sort vertices in a DAG. It starts by finding vertices that have no incoming edges and adds them to a queue. It then removes a vertex from the queue and adds it to the sorted list.
*/

class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V, vector<int>());
        vector<int> indegree(V, 0);
        
        for (auto& prereq : edges) {
            int u = prereq[1];
            int v = prereq[0];
            adj[u].push_back(v);
            indegree[v]++;
        }
        
        queue<int> q;
        for (int i = 0; i < V; ++i) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        
        vector<int> ans;
        int count = 0;
        
        while (!q.empty()) {
            int course = q.front();
            q.pop();
            ans.push_back(course);
            count++;
            
            for (int neighbor : adj[course]) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }
        
        if (count < V) {
            return {};
        }
        
        return ans;
    }
};
/*Time Complexity: O(V+E) where 

V is the number of vertices and 

E is the number of edges.
Space Complexity: O(V+E)
*/
