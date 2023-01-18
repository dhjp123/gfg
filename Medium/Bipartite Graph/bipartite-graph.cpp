//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

bool bfs(int node, vector<int>adj[],vector<int>&color) {
        queue<int>q;
        q.push(node);
        color[node] = 0;
        while(!q.empty()) {
            auto p = q.front();
            q.pop();
            for(auto i: adj[p]) {
                if(color[i] == -1) {
                    color[i] = 1 - color[p];
                    q.push(i);
                }
                else if(color[i] == color[p])
                    return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]) {
	    vector<int>color(V,-1);
	    for(int i=0;i<V;i++) {
	        if(color[i] == -1) {
	            if(bfs(i,adj,color) == false)
	                return false;
	        }
	    }
	    return true;
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
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends