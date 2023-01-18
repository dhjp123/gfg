//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    
    void dfs(int node,unordered_map<int,bool> & vis,unordered_map<int,vector<int>> & adj)
    {
        vis[node]=true;
        for(auto it:adj[node])
        {
            if(!vis[it])
            dfs(it,vis,adj);
        }
    }
    int isCircle(int N, vector<string> A)
    {
        // code here
        // make adj list
       unordered_map<int,vector<int>> adj;
        for(auto it:A)
        {
            int firstL=it[0]-'a';
            int lastL=it.back()-'a';
            adj[firstL].push_back(lastL);
            adj[lastL].push_back(firstL);
            
        }
        unordered_map<int,bool> vis;
        int cnt=0;
         for(auto it:adj)
         {
             int node=it.first;
             if(!vis[node])
             dfs(node,vis,adj),cnt++;
         }

        
        if(cnt>1)
        return 0;
        for(auto it:adj)
        {
            int node=it.first;
            if(adj[node].size()&1)
            return 0;
        }
        return 1;
    }
    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<string> A;
        string s;
        
        for(int i = 0;i < N; i++)
        {
            cin>>s;
            A.push_back(s);
        }
        
        Solution ob;
        cout<<ob.isCircle(N, A)<<endl;
    }
    return 0;
}
// } Driver Code Ends