
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if (grid.empty()) return 0; // Handle empty grid case
        int n = grid.size();
        int m = grid[0].size();
        int cntfresh = 0;

        // {{row, col}, time}
        queue<pair<pair<int, int>, int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0)); // 

        // Fill the queue with initially rotten oranges and count fresh oranges
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 2; // Mark as rotten
                }

                else
                {
                    vis[i][j]=0;
                }
                if (grid[i][j] == 1) {
                    cntfresh++; // Count fresh oranges
                }
            }
        }

        int time = 0;
        int drow[] = {-1, 0, 1, 0}; // Directions for row
        int dcol[] = {0, 1, 0, -1}; // Directions for column
        int cnt = 0; // Count of rotten oranges

        while (!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            time = max(time, t); // Update time
            q.pop();
            
            // Process all 4 directions
            for (int i = 0; i < 4; i++) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                
                // Check bounds and if the orange is fresh
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    vis[nrow][ncol] != 2 && grid[nrow][ncol] == 1) {
                    q.push({{nrow, ncol}, t + 1}); // Push the new rotten orange to the queue
                    vis[nrow][ncol] = 2; // Mark as rotten
                    cnt++; // Count how many oranges have rotted
                }
            }
        }

        // If the number of rotten oranges is not equal to the number of fresh oranges
        if (cnt != cntfresh) {
            return -1; // Not all oranges can rot
        }

        return time; // Return the time taken for all oranges to rot
    }
};
// TC and SC :O(n*m)