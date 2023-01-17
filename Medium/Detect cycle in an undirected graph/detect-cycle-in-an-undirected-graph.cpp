//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    bool bfs(int x,int vis[],vector<int>adj[]){
        vis[x]=1;
        queue<pair<int,int>>q;
        q.push({x,-1});
        while(!q.empty()){
            int a= q.front().first;
            int b= q.front().second;
            q.pop();
            for(auto it:adj[a]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,a});
                    
                }
                else if(b!=it){
                    return true;
                }
            }
        }
        return false;
        
        
        
    }
    
    public:
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int v, vector<int> adj[]) {
        // Code here
        int vis[v]={0};
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(bfs(i,vis,adj)){
                    return true;
                }
            }
        }
        return false;
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends