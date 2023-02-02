//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  void dfs(int node,vector<int>adj[],vector<int>&vis,long long int &ans,vector<int>&par,vector<int>&dfsvis){
      vis[node]=1;
      dfsvis[node]=1;
      for(auto x:adj[node]){
          if(!vis[x]){
              par[x]=node;
              dfs(x,adj,vis,ans,par,dfsvis);
          }
          else if (dfsvis[x]){
               par[x]=node;
              int y=x;
              long long sum=0;
              do{
                  y=par[y];
                  sum+=y;
              }while(y!=x);
              ans=max(ans,sum);
              
              
          }
      }
      dfsvis[node]=0;
  }
  long long largestSumCycle(int n, vector<int> edge)
  {
    // code here
    vector<int>adj[n];
    vector<int>vis(n,0),par(n,-1),dfsvis(n,0);
    for(int i=0;i<n;i++){
        if(edge[i]!=-1){
            adj[i].push_back(edge[i]);
        }
    }
    long long int ans=-1;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i,adj,vis,ans,par,dfsvis);
        }
    }
    return ans;
  }
};

//{ Driver Code Starts.
signed main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      long long ans=obj.largestSumCycle(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends