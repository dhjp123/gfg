//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int s,vector<int>adj[],int vis[],int pathvis[]){
        vis[s]=1;
        pathvis[s]=1;
        for(auto it:adj[s]){
            if(!vis[it])
            {
                if(dfs(it,adj,vis,pathvis)==true)
                {
                    return true;
                }
                
            }
           
            else if(pathvis[it]){
                return true;
                
            }
        }
        pathvis[s]=0;
        return false;
        
    }
    bool isCyclic(int v, vector<int> adj[]) {
        int vis[v]={0};
        int pathvis[v]={0};
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,pathvis)){
                    return true;
                }
            }
        }
        return false;
        
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
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends