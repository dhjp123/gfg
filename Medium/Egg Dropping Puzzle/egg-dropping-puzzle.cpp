//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int dp[201][201];
    int solve(int e,int f){
       // int low,right;
   int mn=INT_MAX;
    if(f==1||f==0|| e==1){
        return f;
    }
   
   
    if(dp[e][f]!=-1){
        return dp[e][f];
    }
    for(int k=1;k<=f;k++){
       //
       
       
         int temp=1+max(solve(e-1,k-1),solve(e,f-k));
         mn=min(mn,temp);
       
       
    }
    //int  temp= 1+max(low,right);
     return dp[e][f]=mn;
   
        
        
    }
    int eggDrop(int e, int f) 
    {
        
        memset(dp,-1,sizeof(dp));
        return solve(e,f);
   
   
   
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends