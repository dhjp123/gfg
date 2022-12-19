//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

    class Solution {
  public:
  
    int solve(int i,int k,int n,vector<int>& height,vector<int>& dp)
    {
        int a=1000000;
        if(i==n-1)
        {
            return dp[i]=0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int j=1;
        
        while(j<=k && i+j<n)
        {
            int p=abs(height[i]-height[i+j])+solve(i+j,k,n,height,dp);
            if(a>p)
            {
                a=p;
            }
            j++;
            
        }
        
        return dp[i]=a;
    }
  
  
  
  
  
    int minimizeCost(vector<int>& height, int n, int k) {
        vector<int> dp(n,-1);
        solve(0,k,n,height,dp);
        return dp[0];
    }

    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends