//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPaths(int n, vector<vector<int>>& edges) {
        // code here
        vector<pair<int,int>>adj[n];
        vector<int>dist(n,1e9),ways(n,0);
        dist[0]=0;
        ways[0]=1;
        int mod= 1e9+7;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        for(auto it:edges){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
            
        }
        while(!pq.empty()){
            int a= pq.top().first;
            int b= pq.top().second;
            pq.pop();
            for(auto it:adj[b]){
                int adjnode= it.first;
                int ewdge=it.second;
                if(a+ewdge<dist[adjnode]){
                    dist[adjnode]=a+ewdge;
                    pq.push({dist[adjnode],adjnode});
                    ways[adjnode]=ways[b];
                }
                else if(a+ewdge==dist[adjnode]){
                    ways[adjnode]=(ways[adjnode]+ways[b])%mod;
                    
                }
            }
            
        }
        return ways[n-1]%mod;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends