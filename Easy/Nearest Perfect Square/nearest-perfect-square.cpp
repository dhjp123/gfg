//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> nearestPerfectSquare(int N) {
       vector < int > ans ;
       long long int  fl = floor ( sqrt(N));
       long long int  ce = ceil ( sqrt (N));
       long long int  ans1 = fl * fl ;
       long long int ans2 = ce*ce;
       if ( ans2 - N < N- ans1)
       {
           ans.push_back(ans2);
           ans.push_back( ans2 - N);
       }else{
           ans.push_back(ans1);
           ans.push_back(N-ans1);
       }
       return ans ;
   }
        // code here
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> ans = ob.nearestPerfectSquare(N);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends