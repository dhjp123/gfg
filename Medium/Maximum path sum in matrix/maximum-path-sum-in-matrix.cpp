//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
          int dp[N+2][N+2];

        

        memset(dp, 0, sizeof(dp));

        int tmp = 0;

        for(int i = 1; i < N+1; i++){

            for(int j = 1; j < N+1; j++){

                if(j+1 < N+1) 

                    tmp = dp[i-1][j+1];   

                else

                    tmp = 0;

                

                dp[i][j] = max(dp[i][j],  Matrix[i-1][j-1] + max(dp[i-1][j-1], max( dp[i-1][j], tmp )));

            }

        }

            

            

        int ans = 0;    

        for(int i = 1; i < N+1; i++){

            ans = max(ans, dp[N][i]);

        }

        

        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends