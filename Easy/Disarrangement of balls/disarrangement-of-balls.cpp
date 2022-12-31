//{ Driver Code Starts
// Initial function Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long int  dp[10001] ;
    int const mod =1e9+7;
    long int disarrange(int n){
        // code here
        
        dp[1]=0;
        dp[2]=1;
        for(int i=3;i<n+1;i++){
            dp[i]=((i-1)%mod*(dp[i-1]+dp[i-2])%mod)%mod;
        }
        return dp[n];
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.disarrange(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends