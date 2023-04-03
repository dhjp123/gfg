//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int v, vector<int> adj[]) {
        int ind[v]={0};
        vector<int>adjrev[v];
        for(int i=0;i<v;i++){
            for(auto it: adj[i]){
               
                adjrev[it].push_back(i);
               
            }
        }
        for(int i=0;i<v;i++){
            for(auto it:adjrev[i]){
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
	        for(auto j:adjrev[node]){
	            ind[j]--;
	            if(ind[j]==0){
	                q.push(j);
	            }
	        }
	    }
	    sort(topo.begin(),topo.end());
	    return topo;
        
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