//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    bool dfs(int node,int parent,vector<int>& tin,vector<int>& low,vector<int>& vis,int c ,int d,vector<int> adj[],int &timer){
        vis[node]=1;
        tin[node]=low[node]=timer++;
        for(auto it: adj[node]){
            if(it==parent) continue;
            else if(!vis[it]){
                if(dfs(it,node,tin,low,vis,c,d,adj,timer)) return true;
                low[node]=min(low[node],low[it]);
                if(low[it]>tin[node]){
                    if((node==c && it==d)||(node==d && it==c)) return true;
                }
            }
            else{
                low[node]=min(low[node],tin[it]);
            }
        }
        return false;
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<int> tin(V,-1);
        vector<int> low(V,-1);
        vector<int> vis(V,0);
        int timer=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,-1,tin,low,vis,c,d,adj,timer))
                return 1;
            }
        }
        return 0;
    }
   
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}


// } Driver Code Ends