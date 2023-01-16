//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int solve(int arr[],int n){
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=arr[0];
        for(int i=2;i<n+1;i++){
            int a= dp[i-2]+arr[i-1];
            int b= dp[i-1];
            dp[i]=max(a,b);
        }
        return dp[n];
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
       // sort(arr, arr + n, greater<int>());
       return solve(arr,n);
       
       
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
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends