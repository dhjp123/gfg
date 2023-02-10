//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int closestNumber(int n , int m) {
        // code here
        float f=round(n/float(m));
        return f*m;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends