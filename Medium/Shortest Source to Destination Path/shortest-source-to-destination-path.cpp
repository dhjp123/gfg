//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
    bool isFeasable(int i , int j , int N, int M, vector<vector<int>> &A){
        if(i >= 0 && j >= 0 && i < N && j < M && A[i][j] == 1){
            return true;
        }
        return false;
    }
  
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        if(A[0][0] == 0){
            return -1;
        }
        queue<pair<int, int>> q;
        q.push({0, 0});
        vector<vector<int>> visited (N, vector<int> (M, -1));
        visited[0][0] = 0;
        vector<vector<int>> totalMoves = {{0 , 1}, {1, 0}, {-1, 0}, {0, -1}};
        while(q.empty() == false){
            auto p = q.front();
            q.pop();
            if(p.first == X && p.second == Y){
                return visited[X][Y];
            }
            for(auto &e: totalMoves){
                int newX = p.first + e[0];
                int newY = p.second + e[1];
                if(isFeasable(newX, newY, N, M, A) && visited[newX][newY] == -1){
                    visited[newX][newY] = 1 + visited[p.first][p.second];
                    q.push({newX, newY});
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
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends