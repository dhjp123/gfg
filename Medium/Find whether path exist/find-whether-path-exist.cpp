//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
     void dfs(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &vis,int n,int &flag){

        if(i<0||i>=n||j<0||j>=n||grid[i][j]==0||vis[i][j]==1) return;

        vis[i][j] = 1;

        if(grid[i][j] == 2){

            flag = 1;

            return;

        }

        dfs(i-1,j,grid,vis,n,flag);

        dfs(i+1,j,grid,vis,n,flag);

        dfs(i,j+1,grid,vis,n,flag);

        dfs(i,j-1,grid,vis,n,flag);

    }

    public:

    bool is_Possible(vector<vector<int>>& grid) 

    {

        //code here

        int n = grid.size();

        int flag = 0;

        vector<vector<int>> vis(n,vector<int>(n,0));

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                if(grid[i][j]==1) dfs(i,j,grid,vis,n,flag);

            }

        }

        return flag;

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
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends