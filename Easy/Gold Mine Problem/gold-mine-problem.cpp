//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[51][101];
    int maxGold(int n, int m, vector<vector<int>>M)
    {
        // code here
       vector<vector<int>> dp(n, vector<int>(m, 0));
        if(n == 0 && m == 0)
            return 0;
        if(n == 1){
            int ans = 0;
            for(int i=0; i<m; i++){
                ans += M[0][i];
            }
            return ans;
        }
        if(m == 1){
            int ans=0;
            for(int i=0; i<n; i++){
                ans = max(ans, M[i][0]);
            }
            return ans;
        }
        for(int j = m-1; j>=0; j--){
            for(int i = n-1; i>=0; i--){
                if(j == m-1){
                    dp[i][j] = M[i][j];
                }
                else if(i == 0){
                    dp[i][j] = M[i][j] + max(dp[i][j+1], dp[i+1][j+1]);
                }
                else if(i == n-1){
                    dp[i][j] = M[i][j] + max(dp[i][j+1], dp[i-1][j+1]);
                }
                else{
                    dp[i][j] = M[i][j] + max(dp[i][j+1], max(dp[i-1][j+1], dp[i+1][j+1]));
                }
            }
        }
        int maxGold = dp[0][0];
        for(int i=1; i<n; i++){
            maxGold = max(dp[i][0], maxGold);
        }
        return maxGold;
    }
       
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends