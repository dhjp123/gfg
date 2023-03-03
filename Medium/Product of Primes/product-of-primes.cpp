//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   bool ispm(long long int n){
       if(n==1){
           return false;
       }
       for(long long int i=2;i<=sqrt(n);i++){
           if(n%i==0){
               return false;
           }
       }
       return true;
   }
    long long primeProduct(long long l, long long r){
        long long int mod= 1e9+7;
        long long int p=1;
        vector<long long int>ans;
        for(long long int i=l;i<=r;i++){
            if(ispm(i)){
                p=(p%mod*i%mod)%mod;
        
               
                
            }
        }
        return  p;
       
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends