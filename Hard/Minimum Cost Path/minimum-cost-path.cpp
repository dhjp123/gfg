//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
	bool isValid(int x, int y, int row, int col)
{
   if (x >= 0 && x < row && y >= 0 && y < col)
   {
       return true;
   }
   return false;
}
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
          int row = grid.size();
   int col = grid[0].size();
   vector<vector<int>> dp(row, vector<int>(col, INT_MAX));
   vector<vector<bool>> visited(row, vector<bool>(col, false));
   dp[0][0] = grid[0][0];
   vector<int> dx = {1, -1, 0, 0};
   vector<int> dy = {0, 0, 1, -1};
   priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
   pq.push(make_pair(dp[0][0], make_pair(0, 0)));
   while (!pq.empty())
   {
       int cost = pq.top().first;
       int x = pq.top().second.first;
       int y = pq.top().second.second;
       pq.pop();
       visited[x][y] = true;
       for (int i = 0; i < 4; i++)
       {
           int temp_x = x + dx[i];
           int temp_y = y + dy[i];
           if (isValid(temp_x, temp_y, row, col) && (!visited[temp_x][temp_y]) && dp[temp_x][temp_y] > (grid[temp_x][temp_y] + dp[x][y]))
           {
               dp[temp_x][temp_y] = grid[temp_x][temp_y] + dp[x][y];
               pq.push(make_pair(dp[temp_x][temp_y], make_pair(temp_x, temp_y)));
           }
       }
   }
   return dp[row - 1][col - 1];

        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends