//{ Driver Code Starts
//Initial Template for C++

// {Driver code starts
#include<bits/stdc++.h>
using namespace std;

//}Driver code ends


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    int uglyNumber(int n)
    {
        //your code here
         vector<int> dp(n,0);
        dp[0] = 1;
        int i = 0, j = 0, k = 0;
        for(int r = 1; r < n; r++){
            dp[r] = min(dp[i]*2,min(dp[j]*3,dp[k]*5));
            if(dp[r]==dp[i]*2)i++;
            if(dp[r]==dp[j]*3)j++;
            if(dp[r]==dp[k]*5)k++;
            // cout<<dp[z]<<" ";
        }
        
        return dp[n-1];
        
    }
    
};



//{ Driver Code Starts.

//{Driver code starts
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        int res;
        res=ob.uglyNumber(n);
        
        cout<<res;
        cout<<"\n";    
    }
}



// } Driver Code Ends