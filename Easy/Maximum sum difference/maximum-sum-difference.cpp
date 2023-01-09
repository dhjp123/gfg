//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxSum(int n){
        // code here
        int diff;
        if(n%2==0){
             diff= n/2+1;
        }else{
            diff=n/2+2;
        }
        return n*(n+1)/2-diff;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.maxSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends