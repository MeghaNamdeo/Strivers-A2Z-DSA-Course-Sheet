

#include <iostream> 
#include <vector>   
#include <unordered_map>
#include <list>
using namespace std;
class Graph
{
    public:
    unordered_map<int,list<int>>adj;
    void addEdge(int u , int v , bool direction)
    {
        //direction =0->undirected graph
        //direction =1->director Graph
        
        
        //create an edge from u to v
        adj[u].push_back(v);
        if(direction == 0)
        {
            //create an edge from v to u
             adj[v].push_back(u);
            

        }
    }


void prinedAdjacencyList()
{
    for(auto node : adj)
    {
        cout<<node.first<<"->";
        
        for(auto neighbour:node.second)
        {
            cout<<neighbour<<",";
        }
        cout<<endl;
        
    }
}
};
int main()
{
    //for undirected 
    //  Graph g;
    // g.addEdge(0,1,0);
    // g.addEdge(1,2,0);
    // g.addEdge(0,2,0);
    // cout<<endl;
    // g.prinedAdjacencyList();
    
    //for directed 
    
     Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(0,2,1);
   cout<<endl;
   g.prinedAdjacencyList();
    
}
//output
//for undirected
0->1,2
1->0,2
2->0,1

//The output for the directed graph will be:


0->1,2,
1->2,
2->




//for undirected graph 

class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        //direction = 0 ->undirected graph
        //direction = 1 -> directed graph
        vector<vector<int>>adj(V);
        
        for(int i=0;i<edges.size();i++)
        {
            int u = edges[i].first;
            int v = edges[i].second;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return adj;
    }
};
//time complexity: O(2E)
//space complexity : O(E)
//E is a number od edges

//Directed graph
class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        //direction = 0 ->undirected graph
        //direction = 1 -> directed graph
        vector<vector<int>>adj(V);
        
        for(int i=0;i<edges.size();i++)
        {
            int u = edges[i].first;
            int v = edges[i].second;
            adj[u].push_back(v);
            
        }
        return adj;
    }
};
//time complexity: O(E)
//space complexity : O(E)
//E is a number od edges


//for weight
#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>

using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;

    void addEdge(int u, int v, int weight, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph

        // Create an edge from u to v
        adj[u].push_back({v, weight});

        if (direction == 0)
        {
            // Create an edge from v to u
            adj[v].push_back({u, weight});
        }
    }

    void printAdjacencyList()
    {
        for (auto node : adj)
        {
            cout << node.first << "->";

            for (auto neighbour : node.second)
            {
                cout << "(" << neighbour.first << "," << neighbour.second << ") ";
            }
            cout << endl;
        }
    }
};

int main()
{
    // For directed graph
    Graph g;
     //g.addEdge(srcNode,destNode,weight,direction)
    g.addEdge(0, 1, 3, 1);
    g.addEdge(1, 2, 8, 1);
    g.addEdge(0, 2, 9, 1);
    
    cout << endl;
    g.printAdjacencyList();

    return 0;
}
