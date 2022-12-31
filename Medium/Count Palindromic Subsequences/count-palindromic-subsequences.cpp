//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
    long long int t[1001][1001];
    int const mod= 1e9+7;
    long long int dhruv(string &str, int i,int j){
        if(i>j){
            return 0;
            
        }
        if(i==j){
            return 1;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        if(str[i]==str[j]){
            return t[i][j]=(1+dhruv(str,i+1,j)+dhruv(str,i,j-1))%mod;
        }else{
             return t[i][j] = (1000000007 +dhruv(str,i+1,j) +dhruv(str,i,j-1) - dhruv(str,i+1,j-1))%1000000007;

           
            
        }
    }
    long long int  countPS(string str)
    {
       //Your code here
       memset(t,-1,sizeof(t));
       int n= str.length();
       return dhruv(str,0,n-1);
    }
     
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends