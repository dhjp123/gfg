//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minCoins(int S[], int m, int n) 
	{ 
	    // Your code goes here
	    long long int dp[m+1][n+1];
        for(int j=1;j<n+1;j++)
        {
            dp[0][j]=INT_MAX-1;
        }
        for(int i=0;i<m+1;i++)
        {
            dp[i][0]=0;
        }
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(S[i-1]<=j)
                {
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-S[i-1]]);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return (dp[m][n]==INT_MAX-1?-1:dp[m][n]);
	}

	    
	    
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends