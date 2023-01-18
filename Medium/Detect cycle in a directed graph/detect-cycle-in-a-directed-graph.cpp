//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int v, vector<int> adj[]) {
        // code here
         int indgree[v]={0};
	    for(int i=0;i<v;i++){
	        for(auto it:adj[i]){
	            indgree[it]++;
	        }
	    }
	    queue<int>q;
	    for(int i=0;i<v;i++){
	        if(indgree[i]==0){
	            q.push(i);
	        }
	    }
	    int cnt=0;
	    vector<int>ans;
	    while(!q.empty()){
	        int x= q.front();
	        q.pop();
	        cnt++;
	        //ans.push_back(x);
	        for(auto it:adj[x]){
	            indgree[it]--;
	            if(indgree[it]==0){
	                q.push(it);
	            }
	        }
	    }
	    if(cnt==v){
	        return false;
	    }
	    return true;
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