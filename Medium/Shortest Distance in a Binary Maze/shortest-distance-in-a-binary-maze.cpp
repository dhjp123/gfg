//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        
        queue<pair<int,pair<int,int>>> q;
        q.push({0,{source.first,source.second}});
        int delr[]={0,-1,0,1};
        int delc[]={1,0,-1,0};
        int n = grid.size();
        int m = grid[0].size();
        grid[source.first][source.second]=0;
        if(source == destination)
        return 0;
        while(!q.empty()){
            int d= q.front().first;
            int x = q.front().second.first;
            int y= q.front().second.second;
            q.pop();
            for(int i=0;i<4;i++){
                int X = x+delr[i];
                int Y = y+delc[i];
                if(X>=0 && Y>=0 && X<n && Y<m && grid[X][Y] == 1){
                    if(X == destination.first && Y == destination.second) return d+1;
                    grid[X][Y]=0;
                    q.push({d+1,{X,Y}});
                }
                
            }
            
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends