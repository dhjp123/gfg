//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    
    int count=INT_MIN;
   string ans="";
   int answer(string s,int i,int j,vector<vector<int>>& dp){
       if(i>j){
           return 1;
       }
       if(i==j){
           return 1;
       }
       
       if(dp[i][j]!=-1){
           return dp[i][j];
       }
       
       if(s[i-1]==s[j-1]){
           dp[i][j]=answer(s,i+1,j-1,dp);
       }
       else{
           dp[i][j]=0;
       }
       answer(s,i+1,j,dp);
       answer(s,i,j-1,dp);
       if(dp[i][j]==1){
           if(j-i+1>=count){
               ans=s.substr(i-1,j-i+1);
               count=j-i+1;
           }
       }
       return dp[i][j];
   }
   string longestPalindrome(string s){
       int n = s.size();
       vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
       (answer(s,1,n,dp)==1);
       // cout<<count;
       if(count==INT_MIN){
           return ans = ans + s[0];
       }
       return ans;
   }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends