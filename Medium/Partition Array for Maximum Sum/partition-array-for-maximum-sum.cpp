//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
     int f(int i,int k,int n,vector<int>& arr , vector<int> & dp){

        if(i==n)return 0;

        if(dp[i]!=-1)return dp[i];

        int maxi=INT_MIN;

        int len=0;

        int ans=0;

        for(int j=i;j<min(i+k,n);j++){

              len++;           

            maxi=max(maxi,arr[j]);     

         int  cost=maxi*len +f(j+1,k,n,arr,dp);         

            ans=max(ans,cost);

        }

        return dp[i]=ans;

    }

    int solve(int n, int k, vector<int>& arr){

        vector<int> dp(n+1,0);

        // vector<int> dp1(n,-1);

        //return f(0,k,n,arr,dp1);

        //Tabulation

        for(int i=n-1;i>=0;i--){

             int maxi=INT_MIN;

        int len=0;

        int ans=0;

        for(int j=i;j<min(i+k,n);j++){

                       len++;

                maxi=max(maxi,arr[j]);

            int  cost=maxi*len +dp[j+1];

            ans=max(ans,cost);

        }

        dp[i]=ans;

        }

        return dp[0];
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        cout<<obj.solve(n,k,arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends