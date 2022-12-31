//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
   
     long long int solve(long long int dp[][1001],int arr[],int n,int i,int j){

        if(i>j) return dp[i][j]=0;

        if(i==j) return dp[i][j]=arr[i];

        if(dp[i][j]!=-1) return dp[i][j];

        long long int pickfirst = arr[i]+ min(solve(dp,arr,n,i+2,j),solve(dp,arr,n,i+1,j-1));

        long long int picklast= arr[j]+ min(solve(dp,arr,n,i,j-2),solve(dp,arr,n,i+1,j-1));

        return dp[i][j]=max(pickfirst,picklast);

    }

    long long maximumAmount(int arr[], int n)

    {

        long long dp[1001][1001];

        memset(dp,-1,sizeof(dp));
       return  solve(dp,arr,n,0,n-1);

    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends