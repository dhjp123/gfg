//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
   
   long long reverse(long long n){
        long long n1=0;
        while(n!=0){
            int ld=n%10;
            n1=n1*10+ld;
            n=n/10;
        }
        return n1;
    }
    bool isPalin(long long n){
        long long n1=reverse(n);
        //cout<<n1;
        return n==n1;
    }
    long long isSumPalindrome(long long n){
        if(isPalin(n)) return n;
        else{
        for(int i=0;i<5;i++){
            int n1=reverse(n);
            n+=n1;
            if(isPalin(n)) return n;
        }
        return -1;
       }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}

// } Driver Code Ends