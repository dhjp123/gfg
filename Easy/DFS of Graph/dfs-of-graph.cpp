//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    int dfsrec(vector<int>&ans,int v,vector<int>adj[],int s,  bool *visited){
       // vector<int>ans;
        visited[s]=true;
        ans.push_back(s);
        for(int u:adj[s]){
            if(visited[u]==false){
                dfsrec(ans,v,adj,u,visited);
            }
        }
        
        
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        
       bool visited[v] ={false};
       dfsrec(ans,v,adj,0,visited);
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