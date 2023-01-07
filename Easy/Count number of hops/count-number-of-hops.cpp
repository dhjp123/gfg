//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        vector<long long >dp(n+1);
        long long  mod =1e9+7;
        if(n<=2){
            return n;
        }
        if(n==3){
            return 4;
        }
        dp[1]=1;
        dp[2]=2;
        dp[3]=4;
        for(long long  i=4;i<=n;i++){
             dp[i]=(dp[i-1]%mod+dp[i-2]%mod+dp[i-3]%mod)%mod;

          
        }
        return dp[n]%mod;
        
        
        
        
        
        ;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends