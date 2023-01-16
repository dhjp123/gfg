//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int solve(int *arr,int n){
	    vector<int>dp(n+1,-1);
	    dp[0]=0;
	    dp[1]=arr[0];
	    if(dp[n]!=-1){
	        return dp[n];
	    }
	    for(int i=2;i<=n;i++){
	        int incl= dp[i-2]+arr[i-1];
	        int excl= dp[i-1]+0;
	        dp[i]=max(incl,excl);
	    }
	    return dp[n];
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    int ans=solve(arr,n);
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends