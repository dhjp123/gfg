//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int v, vector<int> adj[]) {
          int ind[v]={0};
	    for(int i=0;i<v;i++){
	        for(auto it:adj[i]){
	            ind[it]++;
	            
	        }
	    }
	    queue<int>q;
	    vector<int>topo;
	    for(int i=0;i<v;i++){
	        if(ind[i]==0){
	           // topo.push_back()
	            q.push(i);
	        }
	    }
	    while(!q.empty()){
	        int node= q.front();
	        q.pop();
	        topo.push_back(node);
	        for(auto j:adj[node]){
	            ind[j]--;
	            if(ind[j]==0){
	                q.push(j);
	            }
	        }
	    }
	   if(topo.size()==v){
	       return false;
	   }
	   return true;
	    
	
        // code here
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