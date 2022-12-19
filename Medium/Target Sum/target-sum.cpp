//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    
    int countsubsetsum(vector<int>A ,int sum,int n){
       
      int dp[n+1][sum+1];
      for(int i =0;i<n+1;i++){
        dp[i][0] = 1;
    }
    for (int j =1;j<sum+1;j++){
        dp[0][j] = 0;
    }
    
    for (int i =1;i<n+1;i++){
        for (int j=0;j<sum+1;j++){
            if (A[i-1]<=j){
                dp[i][j] =  dp[i-1][j-A[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
   }
   
 public:
   int findTargetSumWays(vector<int>&A ,int target) {
       //Your code here
       int sum =0;
       int n   =  A.size();
       
       for (int i =0;i<n;i++){
           sum+=A[i];
       }
       if(target>sum)
           return 0;
       if((target+sum)%2!=0)
           return 0;
       sum  =  (sum - target)/2;
       return countsubsetsum(A,sum,n);
   }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends