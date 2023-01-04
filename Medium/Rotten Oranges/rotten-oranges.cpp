//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
         queue<pair<int, int>> q;
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                }
            }
        }
        int count = 0;
        vector<pair<int, int>> directions {{0, 1} , {1, 0}, {-1, 0}, {0, -1}};
        while(q.empty() == false){
            int sz = q.size();
            for(int cnt = 0; cnt < sz; cnt++){
                auto curr = q.front();
                q.pop();
                for(auto &e : directions){
                    int newX = curr.first + e.first;
                    int newY = curr.second + e.second;
                    if(newX >= 0 && newX < n && newY >= 0 && newY < m && grid[newX][newY] == 1){
                        grid[newX][newY] = 2;
                        q.push({newX, newY});
                    }
                }
            }
            if(q.empty() == false)
            count++;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return count;
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends