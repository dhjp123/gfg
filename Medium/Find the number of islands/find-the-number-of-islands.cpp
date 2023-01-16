//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void bfs(int r,int c,vector<vector<char>>& grid,vector<vector<int>>&vis){
        vis[r][c]=1;
        queue<pair<int,int>>q;
        q.push({r,c});
        //q.pop();
        int n=grid.size();
        int m= grid[0].size();
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                    int nr= r+i;
                    int nc= c+j;
                    if(nr>=0 && nr<n && nc>=0 && nc<m && 
                    grid[nr][nc]=='1' && !vis[nr][nc]){
                        vis[nr][nc]=1;
                        q.push({nr,nc});
                    }
                }
                
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n= grid.size();
        int m= grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
        for( int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                if(!vis[r][c] && grid[r][c]=='1'){
                    cnt++;
                    bfs(r,c,grid,vis);
                }
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends