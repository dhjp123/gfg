//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfsrec(vector<int>adj[], int s, bool visited[], bool recst[]){
        visited[s]=true;
        recst[s]=true;
        for(int u:adj[s]){
            if(visited[u]==false && dfsrec(adj,u,visited,recst)== true){
                return true;
            }
            else if(recst[u]==true){
                return true;
            }
           // recst[s]=false;
            
        }
         recst[s]=false;
         return false;
    }
    bool isCyclic(int v, vector<int> adj[]) {
        // code here
        bool visited[v];
        for(int i=0;i<v;i++){
            visited[i]=false;
        }
        bool recst[v];
        for(int i=0;i<v;i++){
            recst[i]=false;
        }
        for(int i=0;i<v;i++){
            if(visited[i]==false){
                if(dfsrec(adj,i,visited,recst)==true){
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