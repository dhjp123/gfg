//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   
   
    //int  t[1002][1002];
    int shortestUnSub(string S, string T) {
        
       
        int n=S.size();
        int m=T.size();
        int maxi=1000;
        int dp[n+1][m+1];
        for(int i=1;i<=n; i++)
        {
            dp[i][0]=1;
        }
        for(int i=0;i<=m;i++)
        {
            dp[0][i]=maxi;
        }
        for(int i=0; i<n;i++)
        {
            for(int j=0; j<m;j++)
            {
                int k=j;
                for(k; k>=0;k--)
                {
                    if(S[i]==T[k])
                    break;
                }
                if(k<0)
                {
                    dp[i+1][j+1]=1;
                }
                else
                {
                    dp[i+1][j+1]=min(dp[i][j+1], dp[i][k]+1);
                }
            }
        }
        if(dp[n][m]>=maxi)
        return -1;
        return dp[n][m];
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        cin>>S>>T;

        Solution ob;
        cout << ob.shortestUnSub(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends