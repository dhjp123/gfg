//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    bool isprime(int n){
        if(n==0||n==1){
            return 0;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            } 
            
        }
        return true;
    }
    long long int largestPrimeFactor(int n){
        long long int res= INT_MIN;
        for(long long int i=2;i<=n;i++){
            if(isprime(i)&& n%i==0){
                res=max(res,i);
                
            }
        }
        return res;
        
        
       
        
        
    
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
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends