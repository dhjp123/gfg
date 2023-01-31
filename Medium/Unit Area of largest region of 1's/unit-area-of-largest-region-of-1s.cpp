//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    
       int dfs(int i, int j, vector<vector<bool>> &vis, vector<vector<int>> &grid)

    {

        int n = grid.size(); 

        int m = grid[0].size();

        if(i<0||i>n-1||j<0||j>m-1||!vis[i][j]||grid[i][j]==0) return 0;

        else if(grid[i][j] == 1 && vis[i][j])

        {

            vis[i][j] = false;

            return(1+

            dfs(i-1,j,vis,grid)+

            dfs(i+1,j,vis,grid)+

            dfs(i,j-1,vis,grid)+

            dfs(i,j+1,vis,grid)+

            dfs(i-1,j-1,vis,grid)+

            dfs(i-1,j+1,vis,grid)+

            dfs(i+1,j-1,vis,grid)+

            dfs(i+1,j+1,vis,grid)

            );

        }

    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int ans=0;
        int cnt=0;
       
       
        int n= grid.size();
        int m= grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,true));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&& vis[i][j]){
                    cnt= max(cnt,dfs(i,j,vis,grid));
                    
                    
                }
            }
        }
        return cnt;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends