//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        bool visited[v+1];
        for(int i=0;i<v;i++){
            visited[i]=false;
        }
        queue<int>q;
        visited[0]=true;
        q.push(0);
        while(q.empty()==false){
            int u=q.front();
            q.pop();
            ans.push_back(u);
            for(int v:adj[u]){
                if(visited[v]==false){
                    visited[v]=true;
                    q.push(v);
                }
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends