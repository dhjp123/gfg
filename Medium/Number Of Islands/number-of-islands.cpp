//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    
     void dfs(vector<vector<int>>&matrix,vector<vector<bool>>&vis,int n,int m,int delrow[],int delcol[],int i,int j){

      vis[i][j]=true;

      for(int k=0;k<4;k++){

          int row=i+delrow[k];

          int col=j+delcol[k];

          if(row<n&&row>=0&&col<m&&col>=0&&matrix[row][col]==1&&!vis[row][col]){

              dfs(matrix,vis,n,m,delrow,delcol,row,col);

          }

      }

  }

  int countIslands(vector<vector<int>>&matrix,int n,int m){

      int count=0;

      int delrow[]={-1,0,1,0};

      int delcol[]={0,1,0,-1};

      vector<vector<bool>>vis(n,vector<bool>(m,false));

      for(int i=0;i<n;i++){

          for(int j=0;j<m;j++){
               if(matrix[i][j]==1&&!vis[i][j]){

                  count++;

                  dfs(matrix,vis,n,m,delrow,delcol,i,j);

              }

          }

      }

      return count;

  }

  public:

    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {

        // code here

        vector<int>v;

        vector<vector<int>>matrix(n,vector<int>(m,0));

        for(int i=0;i<operators.size();i++){

            int j=operators[i][0];

            int k=operators[i][1];

            matrix[j][k]=1;

            int ans=countIslands(matrix,n,m);

            v.push_back(ans);

        }

        return v;

    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends