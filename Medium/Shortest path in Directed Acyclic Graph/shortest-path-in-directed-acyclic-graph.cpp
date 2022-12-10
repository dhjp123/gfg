//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> tp(vector<vector<pair<int,int>>> &adj,int n){
        vector<int> ans;
        vector<int> in(n,0);
        queue<int> q;
        for(auto i:adj)
        for(auto j:i)
            in[j.first]++;
        for(int i=0;i<n;i++) if(!in[i]) q.push(i);
        while(!q.empty()){
            int b = q.front();q.pop();
            ans.push_back(b);
            for(auto i:adj[b])
                if(--in[i.first] == 0) q.push(i.first);
        }
        vector<int> dis(n,INT_MAX);
        dis[0]=0;
        for(int i=0;i<ans.size();i++){
            int d = ans[i];
            int t = dis[d];
            if(t == INT_MAX){
                dis[d] = -1;
                continue;
            }
            for(auto j:adj[d])
                if(t+j.second < dis[j.first]) dis[j.first]=t+j.second;
        }
        return dis;
    }
    vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        vector<vector<pair<int,int>>> adj(N);
        for(auto i:edges) adj[i[0]].push_back({i[1],i[2]});
        return tp(adj,N);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends