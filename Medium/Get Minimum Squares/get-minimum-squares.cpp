//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
	
	int dp[10001];
	int dhruv(int n) {
	    int ans=n;
	    if(n<=3) return n;
	    if(dp[n]!=-1) return dp[n];
	    for(int i=1;i<=sqrt(n);i++) {
	        ans=min(ans, 1+dhruv(n-i*i));
	    }
	    return dp[n] = ans;
	}
	int MinSquares(int n) {
	    memset(dp, -1, sizeof(dp));
	    return dhruv(n);
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.MinSquares(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends