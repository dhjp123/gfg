//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
    
    stack<int> st;
	bool *vis;
	void dfsRec(vector<int> adj[], int v) {
	    vis[v] = true;
	    for(int u: adj[v]) {
	        if(vis[u] == false)
	            dfsRec(adj, u);
	    }
	    st.push(v);
	}
	
    int kosaraju(int V, vector<int> adj[])
    {
        vis = new bool[V]{false};
        for(int i=0; i<V; i++) {
            if(vis[i] == false) {
                dfsRec(adj, i);
            }
        }
        vector<int> dfs;
        while(st.empty()==0) {
            dfs.push_back(st.top());
            st.pop();
        }
        vector<int> transpose[V];
        for(int i=0; i<V; i++) {
            for(int v: adj[i]) {
                transpose[v].push_back(i);
            }
            vis[i] = false;
        }
        int cnt = 0;
        for(int i=0; i<dfs.size(); i++) {
            if(vis[dfs[i]] == false) {
                dfsRec(transpose, dfs[i]);
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends