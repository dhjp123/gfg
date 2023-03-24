//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void dfs(int s,int vis[],vector<int>adjl[]){
      vis[s]=1;
      for(auto it:adjl[s]){
          if(!vis[it]){
              vis[it]=1;
              dfs(it,vis,adjl);
          }
      }
      
  }
    int numProvinces(vector<vector<int>> adj, int v) {
        int cnt=0;
       // vector<vector<int>>vis(n,vector<int>(m,0));
       int vis[v]={0};
        vector<int>adjl[v];
        int n= adj.size();
        int m= adj[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(adj[i][j]==1 && i!=j)
                {
                     adjl[i].push_back(j);
                     adjl[j].push_back(i);
                    
                }
               
            }
        }
        int start=0;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,vis,adjl);
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends