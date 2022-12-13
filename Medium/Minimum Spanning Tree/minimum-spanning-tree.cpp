//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        //int key[v],res=0;
       // fill(key,key+v;INT_MAX);
       
       vector<int>key(V,INT_MAX);
        vector<bool>mst(V,0);
        key[0]=0;
        int res=0;
        for(int count=0;count<V;count++){
            int u=-1;
            for(int i=0;i<V;i++){
              if(!mst[i]&&(u==-1||key[i]<key[u]))
                u=i;
            }
            mst[u]=1;
            res+=key[u];
            for(auto x:adj[u]){
                if(!mst[x[0]]){
                    key[x[0]]=min(key[x[0]],x[1]);
                }
            }
            
        }
        return res;
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
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends