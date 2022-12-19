//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int minimumCost(vector<vector<int>>& f, int n, int k) {
        // code here
        vector<vector<int>>adj[n+1];
        for(auto&it:f)
        {
            adj[it[0]].push_back({it[1],it[2]});
            
        }
        
        
        queue<pair<int,int>>pq;
        pq.push({0,k});
        
        vector<int>d(n+1);
        for(int i=1;i<=n;i++)d[i]=1e9;
        d[k]=0;
        
        while(pq.size())
        {
            auto it=pq.front();
            int x=it.first;
            int y=it.second;
            pq.pop();
            
            for(auto&it:adj[y])
            {
                if(d[it[0]]>it[1]+x)
                {
                    d[it[0]]=it[1]+x;
                    pq.push({d[it[0]],it[0]});
                }
            }
        }
        int mx=0;
        for(int&x:d)
        {
            if(x==1e9)return -1;
            mx=max(mx,x);
        }
        return mx;
    
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int size;
        cin >> size;
        vector<vector<int>> flights(size,vector<int>(3));
        for (int i = 0; i < size; i++) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            flights[i]=temp;
        }

        Solution ob;
        cout << ob.minimumCost(flights, n, k) << "\n";
    }
}

// } Driver Code Ends