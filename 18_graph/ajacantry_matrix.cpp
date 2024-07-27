//output 
Here is the full output:


Enter the number of nodes: 3
Enter the number of edges: 6
1 0
0 1
2 1
0 0
2 1
2 2
0 1 0
1 1 1
0 1 1


Here's a step-by-step explanation:

1. Enter the number of nodes: 3
2. Enter the number of edges: 6
3. Enter edge 1: 1 0
4. Enter edge 2: 0 1
5. Enter edge 3: 2 1
6. Enter edge 4: 0 0
7. Enter edge 5: 2 1
8. Enter edge 6: 2 2

The adjacency matrix is then printed:


0 1 0
1 1 1
0 1 1

#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
   cout << "Enter the number of nodes: " ;
   cin >> n;

   vector<vector<int> > adj(n, vector<int>(n,0));

   int e;
   cout << "Enter the number of edges: ";
   cin >> e;
  
   for(int i=0; i<e; i ++) {
    int u,v;
    cin >> u >> v;
    //mark 1
    adj[u][v] = 1;
   }

   //printing
   for(int i=0; i<n; i++) {
    for(int j =0; j<n; j++) {
      cout << adj[i][j] << " ";
    }
    cout << endl;
   }
  
  



  return 0;
}