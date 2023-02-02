//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int gcd(int A, int B) {

        if(B == 0) return A;

        return gcd(B,A%B);

    }
    vector<long long> lcmAndGcd(long long a , long long b) {
        // code here
         vector<long long int>v;
        long long int g=gcd(a,b);
        long long int y= a*b/g;
        v.push_back(y);
        v.push_back(g);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends