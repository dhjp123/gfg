//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int *arr, int n) {
        int ls = 0;

       int rs = 0;

       for(int i = 0;i<n;i++)

       {

           rs += arr[i];

       }

       for(int i = 0;i<n;i++)

       {

           rs = rs-arr[i];

           if(ls==rs)

           {

               return "YES";

           }

           ls += arr[i];

       }

       return "NO";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends