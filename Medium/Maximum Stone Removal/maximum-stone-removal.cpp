//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class DisjointSet{
public:
    vector<int>parent,size;
    DisjointSet(int n){
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0;i<=n;i++)parent[i]=i;
    }
    int findupar(int node){
        if(parent[node]==node)return node;
        return parent[node]=findupar(parent[node]);
    }
    void unionbysize(int u,int v){
        int uu=findupar(u),uv=findupar(v);
        if(uu==uv)return;
        if(size[uu]>size[uv]){
            parent[uv]=uu;
            size[uu]+=size[uv];
        }else{
            parent[uu]=uv;
            size[uv]+=size[uu];
        }
    }
};
class Solution {
  public:
    int maxRemove(vector<vector<int>>& stones, int nm) {
        // Code here
          int n=0,m=0;
        for(auto it:stones){
            n=max(n,it[0]);
            m=max(m,it[1]);
        }
        DisjointSet ds(n+m+1);
        unordered_map<int,int>mp;
        for(auto it:stones){
            ds.unionbysize(it[0],n+it[1]+1);
            mp[it[0]]=1;
            mp[n+it[1]+1]=1;
        }
        int cnt=0;
        for(auto it:mp){
            if(ds.findupar(it.first)==it.first)cnt++;
        }
        return stones.size()-cnt;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj;

        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < 2; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;

        cout << obj.maxRemove(adj, n) << "\n";
    }
}
// } Driver Code Ends