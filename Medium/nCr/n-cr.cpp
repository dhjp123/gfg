//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        // code here
       // int mod = 1e9+7;
        if(r>n){

            return 0;

        }

        if((n-r)<r) r = n-r;

        int mod = 1e9+7;

        int dp[r+1];

        memset(dp,0,sizeof(dp));

        dp[0]=1;

        for(int i=1;i<=n;i++){

            for(int j=min(r,i);j>0;j--){

                dp[j]=(dp[j]+dp[j-1])%mod;

            }

        }

        return dp[r];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends