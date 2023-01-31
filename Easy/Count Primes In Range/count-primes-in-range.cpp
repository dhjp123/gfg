//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPrimes(int L, int R) {
        int cnt = 0;
       vector<bool> prime(R+1,true);
       prime[0] = false;
       prime[1] = false;
       for(int i =2;i<=sqrt(R);i++)
       if(prime[i])
       for(int j = 2*i;j<=R;j = j+i)
       prime[j] = false;
       
       
       for(int i = L ;i<=R;i++)
       if(prime[i])
       cnt++;
       
       return cnt ;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        int ans = ob.countPrimes(L, R);
        cout << ans << "\n";
    }
}
// } Driver Code Ends