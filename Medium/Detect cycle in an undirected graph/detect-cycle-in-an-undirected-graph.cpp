//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool bfs(int node,int vis[],vector<int>adj[],int parent){
        vis[node]=1;
        queue<pair<int,int>>q;
        q.push({node,-1});
        while(!q.empty()){
            int a= q.front().first;
            int b= q.front().second;
            q.pop();
            for(auto it:adj[a]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,a});
                    
                }
                else if(it!=b){
                    return true;
                }
            }
        }
        
        return false;
    }
    bool isCycle(int v, vector<int> adj[]) {
        int vis[v]={0};
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(bfs(i,vis,adj,-1)==true){
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