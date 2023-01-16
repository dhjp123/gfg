//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int start ,vector<int>adj[],vector<int>&ans,int vis[]){
        vis[start]=1;
        ans.push_back(start);
        //return;
        for(auto x:adj[start]){
            if(!vis[x]){
                dfs(x,adj,ans,vis);
                //return;
            }
        }
        return;
        
    }


    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
       int vis[v]={0};
       vector<int>ans;
       int start=0;
       dfs(start,adj,ans,vis);
       return ans;
       
       
       
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends