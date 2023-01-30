//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
 //ector<int>vis;
  int cnt=0;
  bool dfs(vector<int>adj[],int node,vector<int>vis)
  {
      vis[node]=1;
      bool select = false;

        for(auto i:adj[node]){

            if(!vis[i]&& !dfs(adj,i,vis))

            {

                select=true;

            }

        }

        if(select){

            cnt++;

        }

        return select;
      
  }
  
    int countVertex(int n, vector<vector<int>>edges){
        // code here
        vector<int>adj[n+1];
        vector<int>vis(n+1,0);
        for(auto i:edges){
            adj[i[1]].push_back(i[0]); 
            adj[i[0]].push_back(i[1]);   
        }
        dfs(adj,1,vis);
        return cnt;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<vector<int>>edges;
        for(int i = 0; i < N-1; i++){
            int x,y;
            cin >> x >> y;
            vector<int> edge;
            edge.push_back(x);
            edge.push_back(y);
            edges.push_back(edge);
        }
        
        Solution ob;
        cout << ob.countVertex(N, edges) << endl;
    }
    return 0; 
} 
// } Driver Code Ends