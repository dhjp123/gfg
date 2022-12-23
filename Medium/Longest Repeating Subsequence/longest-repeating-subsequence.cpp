//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    int  t[1002][1002];
    int lcs(int x, int y, string t1, string t2)
    {
        // your code here
        
        int n1 = t1.size(), n2 = t2.size();
        vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));
        for (int i = 0; i<n1; i++){
            for (int j = 0; j<n2; j++){
                if (t1[i] == t2[j] && i!=j) dp[i+1][j+1] = dp[i][j]+1;
                else dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
        return dp[n1][n2];
    }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    string t1=str;
		    string t2=str;
		    int m=t1.length();
		    int n=t2.length();
		    return lcs(m,n,t1,t2);
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends