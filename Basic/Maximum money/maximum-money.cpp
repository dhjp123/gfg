//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maximizeMoney(int N , int K) {
        // code here
        if(N % 2 == 0)
        {
            return ((N / 2) * K );
        }
        else
        {
            if(N == 1)
            {
                return N*K;
            }
            else
            {
                return ((N / 2) + 1) * K;
            }
        }
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;

        cin>>N>>K;

        Solution ob;
        cout << ob.maximizeMoney(N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends