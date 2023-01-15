//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int const mod= 1e9+7;
    long long int fibSum(long long int N){
        int t[N+2]={0};
        t[0]=0;
        t[1]=1;
        long long int ans=0;
        for(int i=2;i<N+1;i++){
            t[i]=(t[i-1]+t[i-2])%mod;
            //ans=(ans+t[i])%mod;
        }
        for(int i=0;i<=N;i++){
            ans=(ans+t[i])%mod;
        }
        return ans%mod;
       
       
        //code here
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends