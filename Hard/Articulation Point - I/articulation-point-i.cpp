//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(int node, int parent, vector<int> &vis, vector<int> &tin, vector<int> &low, int &timer, vector<int> adj[], vector<int> &isArticulation) {
    vis[node] = 1; 
    tin[node] = low[node] = timer++;
    int child = 0; 
    for(auto it: adj[node]) {
        if(it == parent) continue;
        
        if(!vis[it]) {
            dfs(it, node, vis, tin, low, timer, adj, isArticulation); 
            low[node] = min(low[node], low[it]); 
	    child++; 
            if(low[it] >= tin[node] && parent != -1) {
                isArticulation[node] = 1; 
            }
        } else {
            low[node] = min(low[node], tin[it]); 
        }
    }
    
    if(parent == -1 && child > 1) {
        isArticulation[node] = 1; 
    }
}
    
    
    vector<int> articulationPoints(int n, vector<int>adj[])
    {
        // Code here
        vector<int>ans;
        vector<int> tin(n, -1);
     	vector<int> low(n, -1); 
    	vector<int> vis(n, 0);
    	vector<int> isArticulation(n, 0); 
    	int timer = 0; 
    	for(int i = 0;i<n;i++)
    	{
    	    
	       if(!vis[i]) 
	       {
	           
	           dfs(i, -1, vis, tin, low, timer, adj, isArticulation); 
	        }
	     }
	
	     for(int i = 0;i<n;i++)
      	{
      	    
	        if(isArticulation[i] == 1)
	        {
	            ans.push_back(i);
	         }
	         
	    
     	}
     	if(ans.size()==0) ans.push_back(-1);
     	return ans;
	
	    
	    
	
    }
};

//{ Driver Code Starts.

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends