//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    long long int dp[36];
	long long int NoOfChicks(int n){
	    // Code here
	    // vector<long long int>dp(n+1,0);
	    dp[0]=0;
	    dp[1]=1;
	    for(int i=2;i<=6;i++){
	        dp[i]=dp[i-1]*3;
	    }
	    dp[7]=726;
	    for(int i=8;i<=n;i++){
	        dp[i]=(dp[i-1]-(2* dp[i-6] /3))*3;
	    }
	    return dp[n];
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends