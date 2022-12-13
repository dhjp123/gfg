//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int s)
    {
        // Code here
         vector<int>dist(V,INT_MAX);
        vector<bool>mst(V,0);
        dist[s]=0;
       // int res=0;
        for(int count=0;count<V-1;count++){
            int u=-1;
            for(int i=0;i<V;i++){
              if(!mst[i]&&(u==-1||dist[i]<dist[u]))
                u=i;
            }
            mst[u]=1;
           // res+=key[u];
           
           for(auto it:adj[u])
           {

               if(dist[it[0]] > it[1]+dist[u])

               {

                   dist[it[0]] = it[1] + dist[u];
               }
           }
           
        }
        return dist;
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
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends