//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
   
   int dp[101][101];
   int helper(vector<int>&v,int m,int n,int k){

        if(m>=n){

            return 0;

        }

        if((v[n]-v[m])<=k){

            return 0;

        }

        if(dp[m][n]!=-1){

            return dp[m][n];

        }

        else{

        return dp[m][n] = 1+min(helper(v,m+1,n,k),helper(v,m,n-1,k));

        }

    }

    

    int removals(vector<int>& arr, int k){

        //Code here

        memset(dp,-1,sizeof(dp));

        sort(arr.begin(),arr.end());

       return helper(arr,0,arr.size()-1,k);

    }

};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends