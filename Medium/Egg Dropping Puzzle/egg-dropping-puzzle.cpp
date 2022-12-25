//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int t[202][202];
    int solve(int e,int f){
        if(f==0||f==1){
            return f;
        }
        if(e==1){
            return f;
        }
        if(t[e][f]!=-1){
            return t[e][f];
        }
        int res=INT_MAX;
        for(int k=1;k<=f;k++){
            int temp=1+max(solve(e-1,k-1),solve(e,f-k));
            res=min(res,temp);
        }
        return t[e][f]=res;
    }
    int eggDrop(int e, int f) 
    
    {
        memset(t,-1,sizeof(t));
        return solve(e,f);
        // your code here
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
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends