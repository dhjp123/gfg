//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool dfs(int sc,int vis[],vector<int>adj[],int check[],int pathvis[]){
      vis[sc]=1;
      pathvis[sc]=1;
      check[sc]=0;
      for(auto it:adj[sc]){
            if(!vis[it]){
                //check[sc]=0;
                if(dfs(it, vis, adj, check,pathvis) == true)
                return true;
            }
            else if(pathvis[it] )
            //check[sc]=0;
            return true;
        }
        
        pathvis[sc] = 0;
        check[sc] = 1;
        return false;
        
        
    }
      
  
    vector<int> eventualSafeNodes(int v, vector<int> adj[]) {
        // code here
        int vis[v]={0};
        int pathvis[v]={0};
        int check[v]={0};
        vector<int>safestate;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                dfs(i,vis,adj,check,pathvis);
            }
        }
        for(int i=0;i<v;i++){
            if(check[i]==1){
                safestate.push_back(i);
            }
        }
        return safestate;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends