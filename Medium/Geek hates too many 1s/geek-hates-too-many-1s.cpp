//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) {
        // code here
          for(int i =31 ;i>=2; i-- )
        {
            if( n&(1<<i) && n&(1<<(i-1)) && n&(1<<(i-2)))
            {
                n^=(1<<(i-2)) ; 
            }
        }
        return n; 
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends