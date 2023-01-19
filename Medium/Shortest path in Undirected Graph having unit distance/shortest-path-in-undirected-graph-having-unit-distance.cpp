//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int n,int m, int sc){
        // code here
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++){
            int u= edges[i][0];
            int v= edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int dist[n];
        for(int i=0;i<n;i++){
            dist[i]=1e9;
        }
        dist[sc]=0;
        queue<int>q;
        q.push(sc);
        while(!q.empty()){
            int x= q.front();
            q.pop();
            for(auto it:adj[x]){
                if(dist[x]+1<dist[it]){
                    dist[it]=1+dist[x];
                    q.push(it);
                }
            }
        }
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            if(dist[i]!=1e9){
                //ans.push_back(dist[i]);
                ans[i]=dist[i];
            }
        }
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends