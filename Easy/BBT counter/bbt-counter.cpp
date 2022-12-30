//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int countBT(int h) { 
        // code here
         long long int dp[h+1];

       long long mod=1e9+7;

       dp[0]=1;

       dp[1]=1;

       

       for(int i=2;i<=h;i++){

           dp[i]=(dp[i-1]*(2*dp[i-2]+dp[i-1]))%mod;

       }

       return dp[h];

    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int h;
        cin >> h;
        Solution ob;
        cout<<ob.countBT(h)<<endl;  
    }
    return 0;
}

// } Driver Code Ends