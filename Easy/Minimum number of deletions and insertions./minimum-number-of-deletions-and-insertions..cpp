//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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
	int minOperations(string t1, string t2) 
	{ 
	    // Your code goes here
	    int m=t1.length();
	    int n=t2.length();
	    int s=m- lcs(m,n,t1,t2);
	    int k=n- lcs(m,n,t1,t2);
	    return s+k;
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends