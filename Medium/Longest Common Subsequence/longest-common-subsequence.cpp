//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
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
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends