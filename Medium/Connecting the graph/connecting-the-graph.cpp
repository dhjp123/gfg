//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class DisJoint {
    vector<int>parent,size;
 public:
  DisJoint(int n){
      parent.resize(n);
      size.resize(n,1);
      for(int i=0;i<n;i++)parent[i]=i;
  }
  
  int findUPar(int node){
      if(parent[node]==node)return node;
      return parent[node]=findUPar(parent[node]);
  }
  
  void UnionBySize(int u,int v){
      int uP=findUPar(u);
      int vP=findUPar(v);
      
      if(uP==vP)return;
      if(size[uP]<size[vP]){
          parent[uP]=vP;
          size[vP]+=size[uP];
      }else{
          parent[vP]=uP;
          size[uP]+=size[vP];
      }
  }
};
  class Solution{
      
    public:
    int Solve(int n, vector<vector<int>>& edges) {
        DisJoint ds(n);
        int ex{};
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            
            if(ds.findUPar(u)==ds.findUPar(v))ex++;
            
            else{
                ds.UnionBySize(u,v);
            }
        }
        
        int nC{};
        
        for(int i=0;i<n;i++){
            if(ds.findUPar(i)==i)nC++;
        }
        if(nC-1>ex)return -1;
        return nC-1;
    
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 2; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution Obj;
        cout << Obj.Solve(n, adj) << "\n";
    }
    return 0;
}
// } Driver Code Ends