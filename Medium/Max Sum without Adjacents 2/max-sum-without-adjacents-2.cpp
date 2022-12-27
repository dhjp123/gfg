//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  
  int fun(vector<int>&a,int n,int i,vector<int>&dp)
  {
      if(i>=n)
      return 0;
      if(dp[i]!=-1)
      return dp[i];
      int pick=a[i]+fun(a,n,i+3,dp);
      if(i+1<n)
      pick+=a[i+1];
      int nonpick=fun(a,n,i+1,dp);
      int x=a[i]+fun(a,n,i+2,dp);
      return dp[i]=max(max(pick,nonpick),x);
  }
  int findMaxSum(vector<int>& a){
      int n=a.size();
      vector<int>dp(n,-1);
      fun(a,a.size(),0,dp);
      return dp[0];
  }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        int ans = ob.findMaxSum(a);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends