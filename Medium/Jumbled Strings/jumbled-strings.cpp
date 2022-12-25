//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:

vector<vector<int>> dp;
    int solve(string &str1,string &str2, int n,int m)
    {
        if (n >= 0 && m == 0)
            return 1;
        if(n==0)
            return 0;
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(str1[n-1]==str2[m-1])
            return dp[n][m]=(solve(str1,str2,n-1,m-1)+solve(str1,str2,n-1,m))%1000000007;
        else
            return  dp[n][m]=solve(str1,str2,n-1,m)%1000000007;
    }
	int TotalWays(string str){
	    // Code here
	    string S1=str;
	    string S2="GEEKS";
	    dp.resize(S1.size()+1,vector<int>(S2.size()+1,-1));
        return solve(S1,S2,S1.size(),S2.size());
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution ob;
		int ans = ob.TotalWays(str);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends