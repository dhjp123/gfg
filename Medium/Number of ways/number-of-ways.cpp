//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long int arrangeTiles(int n){
        
        long long int dp[n+1];
      if(n<4){
          return 1;
      }
      dp[0]=1;
      dp[1]=1;
      dp[2]=1;
      dp[3]=1;
      dp[4]=2;
      for(int i=5; i<=n; i++){
          dp[i]=dp[i-1]+dp[i-4];
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
        cout<<ob.arrangeTiles(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends