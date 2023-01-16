//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int dfs(int start,vector<int>adjlis[],int vis[]){
      vis[start]=1;
      //int cnt=0;
      for(auto x: adjlis[start]){
          if(!vis[x]){
            //  cnt++;
              dfs(x,adjlis,vis);
          }
      }
    //  return cnt;
  }
    int numProvinces(vector<vector<int>> adj, int v) {
        // code here
        int cnt=0;
        vector<int>adjlis[v];
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(adj[i][j]==1 && i!=j){
                    adjlis[i].push_back(j);
                    adjlis[j].push_back(i);
                    
                }
                
                
            }
        }
        int vis[v]={0};
        int start=0;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,adjlis,vis);
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends