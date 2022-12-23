//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int n=S.size();
        string ans=string(1,S[0]);
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        for(int i=0;i<n;++i)dp[i][i]=true;
        for(int i=2;i<n+1;++i){
           bool f=false;
            for(int j=0;j+i-1<n;++j){
                if(S[j]==S[j+i-1] && dp[j+1][j+i-2] && i!=2){
                    dp[j][j+i-1]=true;
                   if(f==false){ ans=S.substr(j,i);f=true;}
                   
                }
                else if(i==2 && S[j]==S[j+1]){
                    
                    dp[j][j+1]=true;
                    if(f==false){ans=S.substr(j,2);f=true;}
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends