class Solution {
private:
    void DFS(vector<vector<int>>& isConnected, vector<bool>& visited, int src) {
        visited[src] = true;
        int n = isConnected.size();
        for (int col = 0; col < n; ++col) {
            if (isConnected[src][col] == 1 && !visited[col]) {
                DFS(isConnected, visited, col);
            }
        }
    }
    
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int count = 0;
        
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                DFS(isConnected, visited, i);
                count++;
            }
        }
        
        return count;
    }
};
/*TC :O(n^2)
SC:O(n)*/