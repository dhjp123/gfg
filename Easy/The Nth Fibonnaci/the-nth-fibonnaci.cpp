//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
   // int t[1002];
    int fib(int n){
        int t[1002]={-1};
        t[0]=0;
        t[1]=1;
        if(t[n]!=0){
            return t[n];
        }
        for(int i=2;i<n+1;i++){
            t[i]=(t[i-1]+t[i-2])%10;
        }
        return t[n];
        
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
        int N;
        cin>>N;
        Solution ob;
        cout << ob.fib(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends