//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

class Solution{
		

	public:
	int dp[1002][1002];
	int func(int a[],int n,int w){
	    if(n==-1 && w==0){
            return 0;
            
        }
        if (n==-1){
            return 1e9+7;
        }
        if(w==0){
            return 0;
        }
        if(dp[n][w]!=-1){
            return dp[n][w];
        }
        if(n+1>w || a[n]==-1){
            return dp[n][w]= func(a,n-1,w);
            
        }
        return dp[n][w]= min(func(a,n-1,w),a[n]+func(a,n,w-(n+1)));
	    
	}
	int minimumCost(int a[], int n, int w) 
	{ 
        // Your code goes here
        memset(dp,-1,sizeof(dp));
        int dhruv= func(a,n-1,w);
        if(dhruv>=1e9+7){
            return -1;
        }
        return dhruv;
        
	} 
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minimumCost(a, n, w) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends