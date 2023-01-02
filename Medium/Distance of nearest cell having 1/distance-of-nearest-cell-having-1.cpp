//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	     int n = grid.size();
	    int m = grid[0].size();
	    int i,j;
	    vector<vector<int>> res(n,vector<int>(m));
	    
	    vector<vector<int>> vis(n,vector<int>(m));
	    int x[] = {0,0,1,-1};
	    int y[] = {1,-1,0,0};
	    
	    queue<pair<pair<int, int>,int>>q;
	    
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            
	            if(grid[i][j]==1){
	                q.push({{i,j},0});
	                vis[i][j] = 1;
	            }
	        }
	    }
	    
	    pair<pair<int, int>,int> p;
	    
	    while(!q.empty()){
	        p = q.front();
	        q.pop();
	        res[p.first.first][p.first.second] = p.second;
	        for(int k=0;k<4;k++){
	                int a = p.first.first+x[k];
	                int b = p.first.second+y[k];
	                
	                if(a<0 || b<0 || a>=n || b>=m || vis[a][b] == 1)
	                    continue;
	                    
	               vis[a][b] = 1;
	               
	               q.push({{a,b},p.second+1});
	        }
	    }
	    
	    return res;
	
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
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends