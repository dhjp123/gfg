//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
static int mod=1005;
class Solution{
public:
  
  
        // code here
        // int mod =1005;
       unordered_map<string,int>dp;
    int solve(string s,int i,int j,bool istrue)
    {
        if(i>j)
            return false;
        if(i==j)
        {
            if(istrue==true)
            {
                return s[i]=='T';
            }
            return s[i]=='F';
        }
        string temp=to_string(i);
        temp.push_back(' ');
        temp+=to_string(j);
        temp.push_back(' ');
        temp+=to_string(istrue);
        if(dp.find(temp)!=dp.end())
            return dp[temp];
        int ans=0;
        for(int k=i+1;k<j;k=k+2)
        {
            int rt=solve(s,k+1,j,true);
            int rf=solve(s,k+1,j,false);
            int lt=solve(s,i,k-1,true);
            int lf=solve(s,i,k-1,false);
            if(s[k]=='&')
            {
                if(istrue==true)
                {
                    ans+=rt*lt;
                }
                else
                {
                    ans+=rt*lf+rf*lt+rf*lf;
                }
            }
            else if(s[k]=='|')
            {
                if(istrue==true)
                {
                    ans+=rt*lf+rf*lt+rt*lt;
                }
                else
                {
                    ans+=rf*lf;
                }
            }
            else if(s[k]=='^')
            {
                if(istrue==true)
                {
                    ans+=rf*lt+rt*lf;
                }
                else
                {
                    ans+=rf*lf+rt*lt;
                }
            }
        }
        return dp[temp]=(ans%1003);
    }
    int countWays(int N, string S){
        return solve(S,0,N-1,1);
    }

    
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends