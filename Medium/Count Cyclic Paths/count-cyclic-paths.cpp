//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int countPaths(int n){
        long long int mod=1e9+7;
        if(n==1){
            return 0;
        }
        else if (n==2){
            return 3;
        }
        else if(n==3){
            return 6;
        }
        else if(n==4){
            return 21;
        }
        vector<long long int>dp(n+1,0);
        dp[1]=0;
        dp[2]=3;
        dp[3]=6;
        dp[4]=21;
        for(long long int i=5;i<=n;i++){
            dp[i]=((dp[i-1]*2)%mod+(dp[i-2]*dp[2])%mod)%mod;
            
        }
        return dp[n];
         
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends