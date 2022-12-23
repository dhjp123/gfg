//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int  t[1002][1002];
    int lcs(int x, int y, string t1, string t2)
    {
        // your code here
        
        int n1 = t1.size(), n2 = t2.size();
        vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));
        for (int i = 0; i<n1; i++){
            for (int j = 0; j<n2; j++){
                if (t1[i] == t2[j]) dp[i+1][j+1] = dp[i][j]+1;
                else dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
        return dp[n1][n2];
    }

    int longestPalinSubseq(string a) {
        //code here
        int m= a.length();
        string b=a;
        reverse(b.begin(),b.end());
        int n= b.length();
        return lcs(m,n,a,b);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends